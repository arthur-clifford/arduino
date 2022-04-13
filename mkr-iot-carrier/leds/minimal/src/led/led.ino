#include <Arduino_MKRIoTCarrier.h>
/** For Arduino OPLÁ or kits using MRKIoTCarrier
 * Minimal sketch to test that LEDs turn on. 
 * Turns on all leds at the same time
 * The LEDs will be white or RGB 255,255,255
 */

MKRIoTCarrier carrier;
/** Note:
 * carrier.leds.begin does not have to be done in your sketch,
 * begin, clear, and show are called internaly in MKRIoTCarrier
 * and sets things up to work with the 5 LEDs on your board.
 * Note also the library for working with the LEDs is not included
 * here because MKRIotCarrier already includes that library.
 */
void setup()
{
  carrier.begin();
  carrier.leds.fill(0xFFFFFF); 
  carrier.leds.show();
  
  // remember, leds works by calling either fill or setPixelColor
  // and then calling show. If you forget show, nothing will happen.
}
// For more info about the led tech read the documentation for
// the Adafruit_DotStar.h library but refer to the setup here. 
// 
// If you are using the leds on the MKRIoTCarrier 
// when the documentation refers to leds.someFunction 
// translate that to carrier.leds.someFunction
void loop()
{
  while(1);
}
