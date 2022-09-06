#include <FastLED.h>
#define LED_PIN     10
#define NUM_LEDS    130
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 500);
  FastLED.clear();
  FastLED.show();
  Serial.begin(9600);
}

void rainbow_right_to_left() {
// RED 

for (int i=0; i<26; i++){
    leds[i] = CRGB(255, 7*i, 0);
    delay(20);
    FastLED.setBrightness(50+i);
    FastLED.show();
}

// Orange
for (int i=26; i<50; i++){
  leds[i] = CRGB(255, 77+7*i, 0);
  delay(20);
  FastLED.setBrightness(50+i);
  FastLED.show();
}

// YELLOW
for (int i=50; i<74; i++){
  leds[i] = CRGB(255-(i-24)*23, 255, 0);
  delay(20);
  FastLED.setBrightness(50+i);
  FastLED.show();
}

// GREEN
for (int i=74; i<964; i++){
  leds[i] = CRGB(2, 255-(i-36)*23, (i-36)*23);
  delay(20);
  FastLED.setBrightness(50+i);
  FastLED.show();
}

// BLUE
for (int i=96; i<130; i++){
  leds[i] = CRGB((i-48)*23, 0, 255);
  delay(20);
  FastLED.setBrightness(50+i);
  FastLED.show();
}
// PURPLE 


FastLED.clear();
delay(600);
FastLED.show();
  
}

void loop() {
  rainbow_right_to_left();
} 
