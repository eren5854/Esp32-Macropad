#include "Images.h"

// 'Eren-Logo_64px', 64x64px
const unsigned char Images::logo [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0e, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x7c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x7f, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x07, 0xfe, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x7f, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x3f, 0xde, 0x7b, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0x9e, 0x79, 0xff, 0x00, 0x00,
	0x00, 0x03, 0xfe, 0x1e, 0x78, 0x7f, 0xc0, 0x00, 0x00, 0x03, 0xf8, 0x1e, 0x78, 0x1f, 0xc0, 0x00,
	0x00, 0x01, 0xf0, 0x00, 0x78, 0x0f, 0x80, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x78, 0x1f, 0x00, 0x00,
	0x00, 0x00, 0xff, 0xfe, 0x78, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x78, 0x3e, 0x00, 0x00,
	0x00, 0x00, 0x7f, 0xfe, 0x78, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x78, 0x7c, 0x00, 0x00,
	0x00, 0x00, 0x1f, 0xfe, 0x78, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x78, 0xf8, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0x8e, 0x79, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x9e, 0x79, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x07, 0xde, 0x7b, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xde, 0x7b, 0xc0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0xfe, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x7f, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x7f, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x7e, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x3e, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x78, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1e, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x60, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char Images::keroppi [] PROGMEM = {
	0x00, 0x00, 0x0c, 0x30, 0x21, 0x84, 0x01, 0x00, 0x06, 0x20, 0x21, 0x84, 0x21, 0x84, 0x5e, 0x7a, 
0x40, 0x02, 0x40, 0x02, 0x53, 0xca, 0x79, 0x9e, 0x47, 0xe2, 0x4c, 0x32, 0x38, 0x1c, 0x00, 0x00
};

const unsigned char Images::bluetoothConnectedImage [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x01, 0xc0, 0x09, 0xe0, 0x05, 0xe0, 0x03, 0xc0, 0x09, 0x90,
  0x09, 0x90, 0x03, 0xc0, 0x05, 0xe0, 0x09, 0xe0, 0x01, 0xc0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00
};

const unsigned char Images::bluetoothOffImage [] PROGMEM = {
  0x04, 0x00, 0x66, 0x00, 0x77, 0x00, 0x3f, 0x80, 0x1f, 0x80, 0x0f, 0x00, 0x0f, 0x00, 0x1f, 0x80,
  0x1f, 0xc0, 0x07, 0xe0, 0x06, 0x60, 0x04, 0x00
};

const unsigned char Images::batteryFull [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x0f, 0xe4, 0x0f, 0xe4,
	0x0f, 0xe4, 0x0f, 0xe4, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'icons8-battery_75-16 ', 16x16px
const unsigned char Images::battery75  [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x0f, 0xc4, 0x0f, 0xc4,
	0x0f, 0xc4, 0x0f, 0xc4, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'icons8-battery_50-16', 16x16px
const unsigned char Images::battery50 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x0e, 0x04, 0x0e, 0x04,
	0x0e, 0x04, 0x0e, 0x04, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'icons8-battery0-16', 16x16px
const unsigned char Images::battery0 [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04,
	0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'icons8-audio-16', 16x16px
const unsigned char Images::volumePlus [] PROGMEM = {
	0x00, 0x00, 0x03, 0x80, 0x06, 0x88, 0x0c, 0x84, 0x18, 0x92, 0xf0, 0x8b, 0xa0, 0xe5, 0xa0, 0xb5, 
	0xa0, 0xb5, 0xa0, 0xed, 0xf0, 0x8b, 0x18, 0x92, 0x0c, 0x84, 0x06, 0x88, 0x03, 0x80, 0x00, 0x00
};

// 'icons8-low-volume-16', 16x16px
const unsigned char Images::volumeMinus [] PROGMEM = {
	0x00, 0x00, 0x03, 0x80, 0x06, 0x80, 0x0c, 0x80, 0x18, 0x80, 0xf0, 0x80, 0xa0, 0xe0, 0xa0, 0xb0, 
	0xa0, 0xb0, 0xa0, 0xe0, 0xf0, 0x80, 0x18, 0x80, 0x0c, 0x80, 0x06, 0x80, 0x03, 0x80, 0x00, 0x00
};

// 'icons8-mute-16', 16x16px
const unsigned char Images::mute [] PROGMEM = {
	0x00, 0x00, 0x03, 0x80, 0x06, 0x80, 0x0c, 0x80, 0x18, 0x80, 0xf0, 0x80, 0xa0, 0xa4, 0xa0, 0x98, 
	0xa0, 0x98, 0xa0, 0xa4, 0xf0, 0x80, 0x18, 0x80, 0x0c, 0x80, 0x06, 0x80, 0x03, 0x80, 0x00, 0x00
};

// 'icons8-copy-16', 16x16px
const unsigned char Images::copy [] PROGMEM = {
	0x00, 0x00, 0x3f, 0xf0, 0x7f, 0xf0, 0x60, 0x00, 0x6f, 0xfe, 0x6f, 0xfe, 0x6c, 0x06, 0x6c, 0x06, 
	0x6c, 0x06, 0x6c, 0x06, 0x6c, 0x06, 0x6c, 0x06, 0x0c, 0x06, 0x0f, 0xfe, 0x0f, 0xfc, 0x00, 0x00
};

// 'icons8-paste-16', 16x16px
const unsigned char Images::paste [] PROGMEM = {
	0x01, 0x80, 0x03, 0xc0, 0x3f, 0xfc, 0x3f, 0xfc, 0x37, 0xec, 0x30, 0x0c, 0x30, 0x0c, 0x30, 0x0c, 
	0x30, 0x0c, 0x30, 0x0c, 0x30, 0x0c, 0x30, 0x0c, 0x3f, 0xfc, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00
};

// 'icons8-fast-forward-round-16', 16x16px
const unsigned char Images::next [] PROGMEM = {
	0x01, 0x80, 0x0f, 0xf0, 0x18, 0x18, 0x20, 0x04, 0x60, 0x06, 0x48, 0xc2, 0x4e, 0xe2, 0xc9, 0x9b, 
	0xc9, 0x9b, 0x4e, 0xe2, 0x48, 0xc2, 0x60, 0x06, 0x20, 0x04, 0x18, 0x18, 0x0f, 0xf0, 0x01, 0x80
};

// 'icons8-pause-button-16', 16x16px
const unsigned char Images::playPause [] PROGMEM = {
	0x01, 0x80, 0x0f, 0xf0, 0x18, 0x18, 0x20, 0x04, 0x60, 0x06, 0x47, 0xe2, 0x47, 0xe2, 0xc7, 0xe3, 
	0xc7, 0xe3, 0x47, 0xe2, 0x47, 0xe2, 0x60, 0x06, 0x20, 0x04, 0x18, 0x18, 0x0f, 0xf0, 0x01, 0x80
};

// 'icons8-rewind-button-round-16', 16x16px
const unsigned char Images::previous [] PROGMEM = {
	0x01, 0x80, 0x0f, 0xf0, 0x18, 0x18, 0x20, 0x04, 0x60, 0x06, 0x43, 0x12, 0x47, 0x72, 0xd9, 0x93, 
	0xd9, 0x93, 0x47, 0x72, 0x43, 0x12, 0x60, 0x06, 0x20, 0x04, 0x18, 0x18, 0x0f, 0xf0, 0x01, 0x80
};

// 'programming-comment-16', 16x16px
const unsigned char Images::commentLine [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x03, 0x30, 0x02, 0x30, 0x02, 0x20, 0x06, 0x60, 
	0x06, 0x60, 0x04, 0x40, 0x0c, 0x40, 0x0c, 0xc0, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'programming-comment-not-16', 16x16px
const unsigned char Images::commentLineNot [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0d, 0x10, 0x07, 0x30, 0x02, 0x30, 0x03, 0x20, 0x07, 0x20, 
	0x04, 0xe0, 0x04, 0xc0, 0x0c, 0x40, 0x0c, 0xe0, 0x08, 0xa0, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00
};
// 'icons8-arrow-up-16', 16x16px
const unsigned char Images::leftUp [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0f, 0x00, 0x0f, 0x80, 0x1f, 0xc0, 0x07, 0x00, 0x07, 0x00, 
	0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 0x07, 0xf8, 0x03, 0xf8, 0x01, 0xf8, 0x00, 0x00, 0x00, 0x00
};
// 'icons8-left-down-2-16', 16x16px
const unsigned char Images::leftDown [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x03, 0xf8, 0x07, 0xf8, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00, 
	0x07, 0x00, 0x07, 0x00, 0x1f, 0xc0, 0x0f, 0x80, 0x0f, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'icons8-new-folder-16', 16x16px
const unsigned char Images::newFolder [] PROGMEM = {
	0x00, 0x00, 0x78, 0x00, 0x7c, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x7f, 0xfe, 0x7f, 0xfe, 0x7f, 0xfe, 
	0x7f, 0xfe, 0x7f, 0xfe, 0x7f, 0xf2, 0x7f, 0xe9, 0x7f, 0xdd, 0x7f, 0xc9, 0x7f, 0xe0, 0x00, 0x1c
};

// 'icons8-brick-wall-16', 16x16px
const unsigned char Images::build [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x32, 0x00, 0x6c, 0x00, 0x30, 0x00, 0x01, 0x16, 
	0x01, 0x16, 0x01, 0xb4, 0x0f, 0xbe, 0x08, 0xa2, 0x05, 0xb4, 0x7d, 0xf6, 0x45, 0x16, 0x3d, 0xf4
};

// 'icons8-magic-16', 16x16px
const unsigned char Images::autoFix [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x11, 0x88, 0x38, 0x1c, 0x10, 0x24, 0x00, 0x48, 0x00, 0x90, 0x01, 0xe0, 
	0x03, 0xc0, 0x07, 0x80, 0x0f, 0x08, 0x1e, 0x18, 0x3c, 0x18, 0x38, 0x08, 0x00, 0x00, 0x00, 0x00
};

// 'cs-file-icon', 16x16px
const unsigned char Images::newClass [] PROGMEM = {
	0xff, 0xc0, 0x80, 0xe0, 0x80, 0x90, 0x80, 0x88, 0x80, 0x78, 0x80, 0x0c, 0x80, 0x04, 0x8f, 0xfe, 
	0x9f, 0xff, 0x98, 0x8f, 0x99, 0xcf, 0x9c, 0x8f, 0x9f, 0xff, 0x80, 0x0c, 0x80, 0x0c, 0xff, 0xf8
};

