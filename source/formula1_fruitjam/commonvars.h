#ifndef commonvars_h
#define commonvars_h

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <Adafruit_dvhstx.h>
#include <Adafruit_TinyUSB.h>
#include "framebuffer.h"

#define gsGame 0
#define gsIntro 1
#define gsGameIntro 2
#define gsGameOver 3

#define gsInitDiff 50

#define gsInitGame (gsInitDiff + gsGame)
#define gsInitIntro (gsInitDiff + gsIntro)
#define gsInitGameIntro (gsInitDiff + gsGameIntro)
#define gsInitGameOver (gsInitDiff + gsGameOver)


#define RIGHTKEY 0x4F
#define LEFTKEY 0x50
#define DOWNKEY 0x51
#define UPKEY  0x52

#define F1KEY 0x3A
#define F2KEY 0x3B
#define DKEY 0x07

// BUTTON3 = B Ingame
// BUTTON2 = back to menu ingame
// BUTTON1 = A Ingame

#define BUTTON1_KEY 0x06 //key C
#define BUTTON2_KEY 0x29 //key ESC
#define BUTTON3_KEY 0x1B //key X

#define BUTTON_1_PIN 5
#define BUTTON_2_PIN 4
#define BUTTON_3_PIN 0

#define BUTTON_1_MASK (1 << 0)
#define BUTTON_2_MASK (1 << 1)
#define BUTTON_3_MASK (1 << 2)

#define SAMPLERATE 44100
#define AUDIO_BUFFER_SIZE 4096
#define PIN_USB_HOST_VBUS (11u)
#define FPS 60

#define CORE1_STACK_SIZE (8 * 1024)  // 8KB instead of default 4KB

extern char* verifyCode;
extern uint8_t gameState, debugMode;
extern bool EnemyStates[3][3];
extern bool PlayerStates[3];
extern uint8_t HitPosition, LivesLost;
extern uint32_t Teller, FlashesDelay, Flashes, Delay;
extern bool CanMove, CrashSoundPlayed;
extern uint32_t frames;
extern uint8_t alternateSource;
extern uint32_t Score;
extern DVHSTX16 tft;
extern uint8_t buttons,prevbuttons;
extern Framebuffer fb;
#endif