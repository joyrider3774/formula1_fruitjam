#include <stdint.h>
#include "commonvars.h"
#include "printfuncs.h"
#include "intro.h"
#include "images/bigfont_RGB565_LE.h"
#include "usbh_processor.h"
#include "framebuffer.h"

#define FRAMEDELAY 60


int ay;

void initIntro(void)
{
    ay = fb.height;
}

void intro(void)
{
    if (gameState == gsInitIntro)
    {
        initIntro();
        gameState -= gsInitDiff;
    }
    
    frames++;
    bufferFillRect(&fb,0,0,fb.width,fb.height, 0x0000);
    if (frames < FRAMEDELAY)
    {
        printMessage(bigfont_data, (14 - 12) >> 1, 4, 24, "WILLEMS DAVY");
    }
    else
    {
        if (frames < FRAMEDELAY *2)
        {
            printMessage(bigfont_data, (14-8) >> 1, 4, 24, "PRESENTS");
        }
        else
        {
            if(ay > 0)
            {
                ay -= 10;
            }
            else
            {
                gameState = gsInitGameIntro;
            }
        }
    }
        
    if (gamepadButtonJustPressed(GAMEPAD_RIGHT) || gamepadButtonJustPressed(GAMEPAD_LEFT) || 
        gamepadButtonJustPressed(GAMEPAD_A) || gamepadButtonJustPressed(GAMEPAD_B) || 
        (buttons & BUTTON_1_MASK) && !(prevbuttons & BUTTON_1_MASK) || 
        (buttons & BUTTON_3_MASK) && !(prevbuttons & BUTTON_3_MASK) ||
        keyJustPressed(LEFTKEY) || keyJustPressed(RIGHTKEY) || keyJustPressed(BUTTON1_KEY) || keyJustPressed(BUTTON3_KEY))
    {            
        gameState = gsInitGameIntro;
    }
}
