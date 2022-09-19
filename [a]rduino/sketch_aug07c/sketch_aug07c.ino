#include <Adafruit_NeoPixel.h>
#include <KosmoBits_Pixel.h>

KosmoBits_Pixel pixel;

int red = 0;
int green = 0;
int blue = 0;
int brightness = 0;

void setup() {
}

void loop() {
  brightness = 50;
  pixel.setColor(red, green,blue, brightness);
  delay(500);
}
