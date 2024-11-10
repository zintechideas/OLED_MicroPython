#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

static const uint8_t image_data_1[1024] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x80, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xe1, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xe3, 0x9c, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x23, 0x1c, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x21, 0x0c, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x3f, 0x1c, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xe8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xec, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xf4, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x7f, 0xde, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x9e, 0x7e, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 0x80, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xc0, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xc2, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x1f, 0xff, 0xff, 0xe1, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xf1, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x3f, 0xff, 0xff, 0xf0, 0x81, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x7f, 0xff, 0xff, 0xf8, 0x40, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0x84, 0x7f, 0xff, 0xff, 0xfc, 0x40, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0x08, 0xff, 0xff, 0xff, 0xfc, 0x60, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0x09, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0x09, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x09, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x0d, 0xff, 0xff, 0xff, 0xfc, 0x38, 0x3f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 0xff, 0xf8, 0x04, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x03, 0xff, 0xff, 0xff, 0xf0, 0x02, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0xf1, 0xff, 0xff, 0xff, 0xe8, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xf8, 0x7f, 0xff, 0xff, 0xdc, 0x03, 0x3f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfb, 0xfc, 0x1f, 0xff, 0xff, 0xdc, 0x0f, 0xdf, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xc7, 0xfe, 0x0f, 0xff, 0xff, 0xdf, 0x7f, 0xdf, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x3f, 0xfe, 0x07, 0xff, 0xff, 0xbf, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0x03, 0xff, 0xff, 0xbf, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0x81, 0xff, 0xff, 0xbf, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xbf, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xbf, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xf7, 0xff, 0xff, 0x3f, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfb, 0xff, 0xff, 0x7f, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfd, 0xff, 0xfc, 0x7f, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0x7f, 0xe0, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 0xfe, 0x03, 0x80, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xfd, 0xff, 0xfe, 0x7f, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xf3, 0xff, 0xff, 0x3f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0x8c, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
static const uint8_t image_data_2[1024] = {
   0xff, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xe0, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xfe, 0x1e, 0xc2, 0x1f, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xf0, 0x4f, 0x78, 0x06, 0x1f, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 0xff, 
    0xe4, 0xe0, 0xe9, 0xc4, 0x0f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xc9, 0xe0, 0x3f, 0xff, 0xff, 
    0xc2, 0x00, 0xf8, 0x07, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x58, 0x29, 0xdf, 0xff, 0xff, 
    0xc1, 0x00, 0x24, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xbb, 0x5f, 0xff, 0xff, 
    0x84, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x6b, 0x34, 0xdf, 0xff, 0xff, 
    0x80, 0x00, 0x05, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9e, 0xff, 0x3f, 0xff, 0xff, 
    0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x7f, 0xff, 0xff, 
    0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x1f, 0xff, 0xff, 0xff, 
    0x00, 0x00, 0x21, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3e, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x00, 0x00, 0x7f, 0xe0, 0x3f, 0xfc, 0x1f, 0xbf, 0xff, 0xfc, 0x9f, 0xff, 0xff, 0xff, 0xff, 
    0x80, 0x02, 0x30, 0x7f, 0x80, 0x0f, 0xf6, 0x1f, 0xbf, 0xff, 0xfa, 0x47, 0xff, 0xdf, 0xff, 0xff, 
    0xc0, 0x00, 0x10, 0x3f, 0x83, 0x27, 0x80, 0x3f, 0x80, 0xff, 0xf0, 0x00, 0x7e, 0x3f, 0xff, 0xff, 
    0xe0, 0x00, 0x00, 0x3f, 0xc0, 0x0f, 0xff, 0xff, 0x00, 0x01, 0x08, 0x00, 0x00, 0x3f, 0xff, 0xff, 
    0xf0, 0x00, 0x00, 0x1f, 0xf8, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x40, 0x00, 0x00, 0x7f, 0xff, 0xff, 
    0xf8, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x80, 0x00, 0x00, 0x7f, 0xff, 0xff, 
    0xfe, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe7, 0xf8, 0x00, 0x01, 0x80, 0x00, 0x00, 0x07, 0xff, 0xff, 
    0xff, 0xc0, 0x00, 0x01, 0xff, 0xf0, 0x0f, 0xe0, 0x00, 0x01, 0x40, 0x00, 0x01, 0x00, 0xff, 0xff, 
    0xff, 0xf0, 0x00, 0x00, 0x7f, 0xfe, 0xbf, 0xc0, 0x00, 0x03, 0x00, 0x00, 0x02, 0x00, 0x1f, 0xff, 
    0xff, 0xfc, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 
    0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x04, 0x00, 0x00, 0x7f, 
    0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
    0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x04, 0x00, 0x03, 0x03, 
    0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x07, 0xef, 0xf8, 0x00, 0x00, 0x04, 0x00, 0x02, 0x01, 
    0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf3, 0xfc, 0x00, 0x00, 0x02, 0x00, 0x06, 0x5f, 
    0xff, 0xff, 0xff, 0xc0, 0x00, 0xff, 0xff, 0xff, 0xfd, 0xfe, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 
    0xff, 0xff, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xfe, 0xff, 0x00, 0x00, 0x01, 0x00, 0x30, 0x03, 
    0xff, 0xff, 0xff, 0xf8, 0x6f, 0xff, 0xff, 0xff, 0xf7, 0x7f, 0x00, 0x00, 0x03, 0x01, 0xfc, 0x7f, 
    0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x80, 0x00, 0x03, 0x9f, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xe0, 0x00, 0x07, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0x00, 0x1f, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x77, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x5f, 0xff, 0xb7, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xff, 0x83, 0xaf, 0xff, 0xfe, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf7, 0xff, 0xf1, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x75, 0xc5, 0xeb, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x7f, 0xe3, 0x4f, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x37, 0x9f, 0x93, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3c, 0xb6, 0xcb, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x43, 0x37, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb3, 0x12, 0xe7, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0e, 0x81, 0x4f, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x18, 0x07, 0x9f, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x38, 0x6d, 0x7f, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xfb, 0x75, 0x4e, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0xe5, 0x00, 0x79, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xcb, 0x85, 0xf3, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xff, 0xfe, 0x3d, 0x64, 0x27, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xb1, 0xea, 0x07, 0xdf, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0x82, 0x07, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xc7, 0xfc, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xbe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x80, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0x80, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9e, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xcf, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbe, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8a, 0x3e, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa1, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
 
void setup() {
  Serial.begin(115200);
 
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
 display.clearDisplay();
}
 
void loop() {
 
  display.clearDisplay();
  
  
  // Draw bitmap on the screen
  display.drawBitmap(0, 0, image_data_1, 128, 64, 1);
  display.display();
  delay(2000);
  display.clearDisplay();
  
  
  // Draw bitmap on the screen
  display.drawBitmap(0, 0, image_data_2, 128, 64, 1);
  display.display();
  delay(2000);
  
  
}
