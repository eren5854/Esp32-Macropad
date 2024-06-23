#ifndef Images_H
#define Images_H

#include <Arduino.h>

class Images {
  public:
    static const unsigned char logo[] PROGMEM;
    static const unsigned char keroppi[] PROGMEM;

    static const unsigned char bluetoothConnectedImage[] PROGMEM;
    static const unsigned char bluetoothOffImage[] PROGMEM;

    static const unsigned char batteryFull[] PROGMEM;
    static const unsigned char battery75[] PROGMEM;
    static const unsigned char battery50[] PROGMEM;
    static const unsigned char battery0[] PROGMEM;

    static const unsigned char volumePlus[] PROGMEM;
    static const unsigned char volumeMinus[] PROGMEM;
    static const unsigned char mute[] PROGMEM;
    static const unsigned char copy[] PROGMEM;
    static const unsigned char paste[] PROGMEM;
    static const unsigned char next[] PROGMEM;
    static const unsigned char playPause[] PROGMEM;
    static const unsigned char previous[] PROGMEM;

    static const unsigned char commentLine [] PROGMEM;
    static const unsigned char commentLineNot [] PROGMEM; 
    static const unsigned char leftUp [] PROGMEM; 
    static const unsigned char leftDown [] PROGMEM; 
    static const unsigned char newFolder [] PROGMEM;
    static const unsigned char build [] PROGMEM; 
    static const unsigned char newClass [] PROGMEM;
    static const unsigned char autoFix [] PROGMEM;
};

#endif