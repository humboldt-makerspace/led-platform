#include "includes.h"

void setup ()
{
	Setup::init();
}

int j = 0;

void loop ()
{	
	Interface::readButtons();
	for (int i = 0; i < NUM_LEDS; i++) {
		Interface::leds[i] = ColorGradient::colors[j];
	}
	j == NUM_LEDS - 1 ? j = 0 : j++;
	FastLED.delay(100);
	FastLED.show();
}
