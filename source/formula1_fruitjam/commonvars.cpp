#include <stdint.h>
#include <Adafruit_dvhstx.h>
#include <Adafruit_TinyUSB.h>
#include "commonvars.h"
#include "framebuffer.h"
#if defined(ADAFRUIT_FEATHER_RP2350_HSTX)
DVHSTXPinout pinConfig = ADAFRUIT_FEATHER_RP2350_CFG;
#elif defined(ADAFRUIT_METRO_RP2350)
DVHSTXPinout pinConfig = ADAFRUIT_METRO_RP2350_CFG;
#elif defined(ARDUINO_ADAFRUIT_FRUITJAM_RP2350)
DVHSTXPinout pinConfig = ADAFRUIT_FRUIT_JAM_CFG;
#elif (defined(ARDUINO_RASPBERRY_PI_PICO_2) || defined(ARDUINO_RASPBERRY_PI_PICO_2W))
DVHSTXPinout pinConfig = ADAFRUIT_HSTXDVIBELL_CFG;
#else
// If your board definition has PIN_CKP and related defines,
// DVHSTX_PINOUT_DEFAULT is available
DVHSTXPinout pinConfig = DVHSTX_PINOUT_DEFAULT;
#endif
Framebuffer fb;
DVHSTX16 tft(pinConfig, DVHSTX_RESOLUTION_320x240, true);
uint8_t gameState, debugMode;
char* verifyCode = NULL;
bool EnemyStates[3][3];
bool PlayerStates[3];
uint8_t HitPosition, LivesLost;
uint32_t Teller, FlashesDelay, Flashes, Delay;
uint32_t Score;
bool CanMove, CrashSoundPlayed;
uint32_t frames;
uint8_t alternateSource;
uint8_t buttons, prevbuttons = 0;
