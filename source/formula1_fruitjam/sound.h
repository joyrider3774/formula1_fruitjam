#ifndef SOUND_H
#define SOUND_H

#include <stdint.h>

void initSound(void);
void playTickSound(void);
void playCrashSound(void);
void playGameOverSound(void);
void incVolumeSound(void);
void decVolumeSound(void);
#endif