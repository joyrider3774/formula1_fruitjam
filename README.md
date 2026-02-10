# Formula 1 Game & Watch Adafruit's fruitjam Version
![DownloadCountTotal](https://img.shields.io/github/downloads/joyrider3774/formula1_fruitjam/total?label=total%20downloads&style=plastic) ![DownloadCountLatest](https://img.shields.io/github/downloads/joyrider3774/formula1_fruitjam/latest/total?style=plastic) ![LatestVersion](https://img.shields.io/github/v/tag/joyrider3774/formula1_fruitjam?label=Latest%20version&style=plastic) ![License](https://img.shields.io/github/license/joyrider3774/formula1_fruitjam?style=plastic)

Formula 1 Game & Watch is a small, fictive formula 1 game & watch style lcd game with high score keeping. The Game was initially created over a decade ago for a small retrogame competition, after which it got ported to the gp2x. This version is based on the gp2x version but with added high scoring.

## Playing the Game
The aim of the game, is to avoid hitting other traffic coming down the screen, you do this by moving your car on the bottom left or right. 

## Controls Fruitjam
- Button 1: Move Player left
- Button 1/2/3: Start a new game at the boot or gameover screen
- Button 3: Move Player right
- Button 2 + 1: Decrease Volume
- Button 2 + 3: Increase Volume

## Controls USB Keuboard
- Left Key: Move Player left
- Left/Right Key: Start a new game at the boot or gameover screen
- Right Key: Move Player right
- F1 Key: Decrease Volume
- F2 Key: Increase Volume

## Controls Adafruit's SNES Controller
- Button LEFT: Move Player left
- Button LEFT/RIGHT: Start a new game at the boot or gameover screen
- Button RIGHT: Move Player right
- Button LEFT SHOULDER: Decrease Volume
- Button RIGHT SHOULDER: Increase Volume

## Libraries / tools used or required
- **Arduino IDE**: for compiling
- **Adafruit_dvhstx**: for video output
- **Adafruit_TinyUSB**: for usbhost mode for keyboard, joypad and mouse input
- **Adafruit_TLV320DAC3100**: for I2S sound output
- **PICO PIO USB:** for usbhost stuff

## Credits
- i2sTones.cpp: I2S tones library mainly made with the help of [claude.ai](https://claude.ai)
- framebuffer.cpp: rgb565 framebuffer library made with the help of [claude.ai](https://claude.ai)
- glcdfont.h: Adafruit_GFX font mainly used internally to display debug information on an internal buffer
- Graphcis are made by me willems davy aka joyrider3774 using gimp

## Notes
- There are 20 volume levels, the default is set to a low value (being 3) out of safety just in case people use headphones immediatly. you can change the default on this [line](https://github.com/joyrider3774/crisp-game-lib-portable-fruitjam/blob/main/source/cglpfruitjam/cglpfruitjam.ino#L72) if you want higher volume
- Adafruit snes gamepad input controls should work
- Please use arduino-pico 5.5.0 or newer board setup, it seems to have fixed usbhost disconnects