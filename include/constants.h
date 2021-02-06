#ifndef CONSTANTS_H
#define CONSTANTS_H

/* data pins for led stripes */
#define LED_PIN					D7

/* number of leds per data pin */
#define NUM_LEDS				100
#define OFFSET_INC_MS			80

/* buttons on control pcb */
#define BUTTON_1_PIN			D5
#define BUTTON_2_PIN			D6
#define NUM_BUTTONS				2

/* lighting */
#define BRIGHTNESS_DEC			20

/* color modes for light show */
typedef enum colors {
	RAINBOW,
	SUPERMAN,
	AVH,
	TEMPERATURE,
	MONO
} ColorMode;

#endif
