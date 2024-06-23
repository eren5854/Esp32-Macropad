#include <BleKeyboard.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "Images.h"

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

BleKeyboard bleKeyboard;

#define btn0 18
#define btn1 32
#define btn2 25
#define btn3 27
#define btn4 19
#define btn5 33
#define btn6 26
#define btn7 14
#define btn8 4
#define btn9 0

int mod = 0;
uint8_t battery = 0;
int analogInPin = 34;
int sensorValue;
float calibration = 0.48;
const unsigned char* lastPressed = Images::keroppi;
bool buttonPressed = false;

const unsigned char* mod0ListImage[] = {
  Images::volumeMinus, Images::volumePlus, Images::mute, Images::copy, Images::previous, Images::next, Images::playPause, Images::paste
};

const unsigned char* mod1ListImage[] = {
  Images::commentLine, Images::leftUp, Images::newFolder, Images::build, Images::commentLineNot, Images::leftDown, Images::newClass, Images::autoFix
};

void setup() {
  Serial.begin(115200);
  Serial.println("BleKeyboard başlatıldı");
  bleKeyboard.setName("Macropad");
  bleKeyboard.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.drawBitmap(32, 0, Images::logo, 64, 64, 1);
  // delay(3000);
  display.display();
  pinMode(btn0, INPUT_PULLUP);
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  pinMode(btn4, INPUT_PULLUP);
  pinMode(btn5, INPUT_PULLUP);
  pinMode(btn6, INPUT_PULLUP);
  pinMode(btn7, INPUT_PULLUP);
  pinMode(btn8, INPUT_PULLUP);
  pinMode(btn9, INPUT_PULLUP);

}

void loop() {
  display.clearDisplay();
  batteryLevel();
  modChange();
}

void modChange(){
  display.drawRect(0, 20, 128, 44, 1);
  modPin();
  if(mod == 0){
    mod0();
  }
  if(mod == 1){
    mod1();
  }
  if(mod == 2){
    mod2();
  }
  if(mod >= 3){
    mod = 0;
  }
  batteryLevelImage();
  display.display();
}

void modPin(){
   if(digitalRead(btn8) == LOW){
      while(!digitalRead(btn8)){}
      mod++;
    }
}

void mod0(){
  if(bleKeyboard.isConnected()){
    modLayout(lastPressed, 96, 34, 16, 16);
    modDefaultLayout("Mod 0");

    int x = 2, y = 23, h = 16, w = 16;
    for(int i = 0; i < sizeof(mod0ListImage) / sizeof(mod0ListImage[0]); i++){
      modLayout(mod0ListImage[i], x, y, h, w);
      x += 20;
      if(x > 80){
        y = 43;
        x = 2;  
      }
    }

    if(digitalRead(btn0) == LOW){
      while(!digitalRead(btn0)){}
      bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
      lastPressed = Images::volumeMinus;
    }
    delay(10);

    if(digitalRead(btn1) == LOW){
      while(!digitalRead(btn1)){}
      bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
      lastPressed = Images::volumePlus;

    }
    delay(10);

    if(digitalRead(btn2) == LOW){
      while(!digitalRead(btn2)){}
        bleKeyboard.write(KEY_MEDIA_MUTE);
        lastPressed = Images::mute;
    }
    delay(10);

    if(digitalRead(btn3) == LOW){
      while(!digitalRead(btn3)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.print("c");
      bleKeyboard.releaseAll();
      lastPressed = Images::copy;
    }
    delay(10);

    if(digitalRead(btn4) == LOW){
      while(!digitalRead(btn4)){}
        bleKeyboard.write(KEY_MEDIA_PREVIOUS_TRACK);
        lastPressed = Images::previous;
    }
    delay(10);

    if(digitalRead(btn5) == LOW){
      while(!digitalRead(btn5)){}
      bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
      lastPressed = Images::next;
    }
    delay(10);

    if(digitalRead(btn6) == LOW){
      while(!digitalRead(btn6)){}
        bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
        lastPressed = Images::playPause;
    }
    delay(10);

    if(digitalRead(btn7) == LOW){
      while(!digitalRead(btn7)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.print("v");
      bleKeyboard.releaseAll();
      lastPressed = Images::paste;
    }
    delay(10);

  }
  else{
    isNotConnect();
  }
}

void mod1(){
  if(bleKeyboard.isConnected()){
    modDefaultLayout("Mod 1");

    int x = 2, y = 23, h = 16, w = 16;
    for(int i = 0; i < sizeof(mod1ListImage) / sizeof(mod1ListImage[0]); i++){
      modLayout(mod1ListImage[i], x, y, h, w);
      x += 20;
      if(x > 80){
        y = 43;
        x = 2;  
      }
    }

    if(digitalRead(btn0) == LOW){
      while(!digitalRead(btn0)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.print("k");
      bleKeyboard.print("c");
      bleKeyboard.releaseAll();
      lastPressed = Images::commentLine;
    }
    delay(10);

    if(digitalRead(btn1) == LOW){
      while(!digitalRead(btn1)){}
      bleKeyboard.press(KEY_LEFT_ALT);
      bleKeyboard.write(KEY_UP_ARROW);
      bleKeyboard.releaseAll();
      lastPressed = Images::leftUp;
    }
    delay(10);

    if(digitalRead(btn2) == LOW){
      while(!digitalRead(btn2)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.press(KEY_LEFT_SHIFT);
      bleKeyboard.print("n");
      bleKeyboard.releaseAll();
      lastPressed = Images::newFolder;
    }
    delay(10);

    if(digitalRead(btn3) == LOW){
      while(!digitalRead(btn3)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.press(KEY_LEFT_SHIFT);
      bleKeyboard.print("b");
      bleKeyboard.releaseAll();
      lastPressed = Images::build;
    }
    delay(10);

    if(digitalRead(btn4) == LOW){
      while(!digitalRead(btn4)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.print("k");
      bleKeyboard.print("u");
      bleKeyboard.releaseAll();
      lastPressed = Images::commentLineNot;
    }
    delay(10);

    if(digitalRead(btn5) == LOW){
      while(!digitalRead(btn5)){}
      bleKeyboard.press(KEY_LEFT_ALT);
      bleKeyboard.press(KEY_DOWN_ARROW);
      bleKeyboard.releaseAll();
      lastPressed = Images::leftDown;
    }
    delay(10);

    if(digitalRead(btn6) == LOW){
      while(!digitalRead(btn7)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.press(KEY_LEFT_SHIFT);
      bleKeyboard.print("a");
      bleKeyboard.releaseAll();
      lastPressed = Images::newClass;
    }
    delay(10);

    if(digitalRead(btn7) == LOW){
      while(!digitalRead(btn7)){}
      bleKeyboard.press(KEY_LEFT_CTRL);
      bleKeyboard.print("k");
      bleKeyboard.print("d");
      bleKeyboard.releaseAll();
      lastPressed = Images::autoFix;
    }
    delay(10);
  }
  else{
    isNotConnect();
  }
}

void mod2(){
  if(bleKeyboard.isConnected()){
    modDefaultLayout("Mod 2");

    if(digitalRead(btn0) == LOW){

      while(!digitalRead(btn0)){}
       display.setCursor(45, 30);
        display.setTextSize(2);
        display.println("Volume Up");
        bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
    }
    delay(10);

    if(digitalRead(btn1) == LOW){
      while(!digitalRead(btn1)){}
      bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
    }
    delay(10);

    // if(digitalRead(btn0) == LOW){
    //   while(!digitalRead(btn0)){
    //     display.setCursor(52, )
    //   }
    //     bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
    // }
    // delay(10);

    // if(digitalRead(btn1) == LOW){
    //   while(!digitalRead(btn1)){}
    //   bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
    // }
    // delay(10);

    // if(digitalRead(btn0) == LOW){
    //   while(!digitalRead(btn0)){
    //     display.setCursor(52, )
    //   }
    //     bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
    // }
    // delay(10);

    // if(digitalRead(btn1) == LOW){
    //   while(!digitalRead(btn1)){}
    //   bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
    // }
    // delay(10);

    // if(digitalRead(btn0) == LOW){
    //   while(!digitalRead(btn0)){
    //     display.setCursor(52, )
    //   }
    //     bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
    // }
    // delay(10);

    // if(digitalRead(btn1) == LOW){
    //   while(!digitalRead(btn1)){}
    //   bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
    // }
    // delay(10);

  }
  else{
    isNotConnect();
  }
}

void batteryLevel(){
  sensorValue = analogRead(analogInPin);
  float voltage = (((sensorValue * 3.3) / 1024) * 2 - calibration);
  battery = mapFloat(voltage, 2.8, 4.8, 0, 100);
  if(battery >= 100){
    battery = 100;
  }
  if(battery <= 0){
    battery = 1;
  }
  // bleKeyboard.setBatteryLevel(battery);
  Serial.print("Analog değer: ");
  Serial.println(sensorValue);
  Serial.print("Çıkış Voltajı: ");
  Serial.println(voltage);
  Serial.print("Battery Level: ");
  Serial.println(battery);
  delay(100);
}

float mapFloat(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void batteryLevelImage(){
  if(battery > 75){
    display.drawBitmap(110, 2, Images::batteryFull, 16, 16, 1);
    // display.display();
  }

  else if(battery <= 75 && battery > 50){
    display.drawBitmap(110, 2, Images::battery75, 16, 16, 1);
    // display.display();
  }

  else if(battery <= 50 && battery > 25){
    display.drawBitmap(110, 2, Images::battery50, 16, 16, 1);
    // display.display();
  }

  else if(battery <= 25){
    display.drawBitmap(110, 2, Images::battery0, 16, 16, 1);
    // display.display();
  }
}

void modLayout(const unsigned char* image, int x, int y, int h, int w){
  display.drawBitmap(x, y, image, h, w, 1);
}

void modDefaultLayout(String mod){
  display.drawRect(0, 0, 128, 20, WHITE);
  display.drawLine(80, 20, 80, 64, 1);
  display.drawBitmap(2, 2, Images::bluetoothConnectedImage, 16, 16, 1);
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(50, 6);
  display.println(mod);
}

void isNotConnect(){
  delay(5000);
  display.drawRect(0, 0, 128, 20, WHITE);
  display.drawBitmap(2, 2, Images::bluetoothOffImage, 16, 16, 1);
}
