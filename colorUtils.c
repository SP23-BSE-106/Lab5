#include <stdio.h>
#include <math.h>
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int min(int x,int y,int z){
  int m = x < y ? x : y;
  m = m < z ? m : z;
  return m;
}

int toGrayScaleLightness(int r, int g, int b){
  // lightness technique (max r,g,b + min r,g,b)/2;
  return (max(r,g,b) + min(r,g,b))/2;
}

int toGrayScaleLuminosity(int r, int g, int b){
  // luminousty technique 0.21r + 0.72g + 0.07b;
  return round(0.21*r + 0.72*g + 0.07*b);
}

// three functions to compute the three sepia-tone RGB values
int toSepiaRed(int r, int g, int b){
  // for red 0.393r + 0.769g + 189b;
  return round(0.393*r + 0.769*g + 189*b);
}

int toSepiaGreen(int r, int g, int b){
  // for green 0.349r + 0.686g + 0.131b;
  return round(0.349*r + 0.686*g + 0.131*b);
}

int toSepiaBlue(int r, int g, int b){
  // for blue 0.272r + 0.534g + 0.131b;
  return round(0.272*r + 0.534*g + 0.131*b);
}



int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}