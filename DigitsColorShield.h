#pragma once

typedef struct {
  unsigned char r;
  unsigned char g;
  unsigned char b;
} ColorRGB;

//a color with 3 components: h, s and v
typedef struct {
  unsigned char h;
  unsigned char s;
  unsigned char v;
} ColorHSV;
