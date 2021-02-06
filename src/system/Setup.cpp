#include "system/Setup.hpp"
#include "system/Interface.hpp"

WiFiUDP Setup::UDPServer;

void initButtons (void)
{
	pinMode(BUTTON_1_PIN, INPUT_PULLUP);
	pinMode(BUTTON_2_PIN, INPUT_PULLUP);
	for (int i = 0; i < NUM_BUTTONS; i++) Interface::btnPressed[i] = false;
}

void initLeds (void)
{
	FastLED.addLeds<WS2812B, LED_PIN, GRB>(Interface::leds, NUM_LEDS);
}

void initClockStatus (void)
{
	ColorGradient::changeColorGradient(RAINBOW);
}

void Setup::init (void)
{
	Serial.begin(115200);
	initLeds();
	initButtons();
	initClockStatus();
}
