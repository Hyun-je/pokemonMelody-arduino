#include "melody_gym.h"
#include "arduino.h"

static const unsigned int length_main = 75;
static const unsigned int length_sub = 134;


static const Note melody_main[length_main] PROGMEM = {

  // 1st line --------------
  {NOTE_C5,   BEAT_4 + BEAT_8},
  {NOTE_G4,   BEAT_16},
  {NOTE_C5,   BEAT_16},
  {NOTE_AS4,  BEAT_4 + BEAT_8},
  {NOTE_F4,   BEAT_16},
  {NOTE_AS4,  BEAT_16},
  
  {NOTE_A4,   BEAT_2 + BEAT_4},
  {NOTE_B4,   BEAT_4},
  
  {NOTE_C5,   BEAT_2 + BEAT_4},
  {NOTE_G4,   BEAT_8},
  {NOTE_C5,   BEAT_8},

  {NOTE_D5,   BEAT_8 + BEAT_16},
  {NOTE_AS4,  BEAT_16},
  {NOTE_AS4,  BEAT_2 + BEAT_4},

  {NOTE_C5,   BEAT_2 + BEAT_4},
  {NOTE_G4,   BEAT_8},
  {NOTE_C5,   BEAT_8},

  {NOTE_AS4,  BEAT_8},
  {NOTE_AS4,  BEAT_16},
  {NOTE_C5,   BEAT_16},
  {NOTE_D5,   BEAT_2 + BEAT_4},

  // 2nd line --------------
  {NOTE_E5,   BEAT_2 + BEAT_4},
  {NOTE_D5,   BEAT_8},
  {NOTE_E5,   BEAT_8},

  {NOTE_F5,   BEAT_8 + BEAT_16},
  {NOTE_D5,   BEAT_16},
  {NOTE_D5,   BEAT_4},
  {NOTE_AS5,  BEAT_8 + BEAT_16},
  {NOTE_F5,   BEAT_16},
  {NOTE_F5,   BEAT_4},

  {NOTE_E5,   BEAT_2 + BEAT_4},
  {NOTE_D5,   BEAT_8},
  {NOTE_E5,   BEAT_8},

  {NOTE_F5,   BEAT_8},
  {NOTE_D5,   BEAT_16},
  {NOTE_F5,   BEAT_16},
  {NOTE_AS5,  BEAT_2 + BEAT_4},

  {NOTE_G4,   BEAT_4 + BEAT_8},
  {NOTE_C5,   BEAT_4 + BEAT_8},
  {NOTE_G4,   BEAT_4},

  // 3rd line --------------
  {NOTE_AS4,  BEAT_4},
  {NOTE_A4,   BEAT_4},
  {NOTE_G4,   BEAT_4},
  {NOTE_F4,   BEAT_4},

  {NOTE_E4,   BEAT_8},
  {NOTE_E4,   BEAT_16},
  {NOTE_F4,   BEAT_16},
  {NOTE_G4,   BEAT_4 + BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_C5,   BEAT_8},
  {NOTE_G4,   BEAT_8},

  {NOTE_AS4,  BEAT_4},
  {NOTE_A4,   BEAT_4},
  {NOTE_G4,   BEAT_4},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},

  {NOTE_G4,   BEAT_4 + BEAT_8},
  {NOTE_C5,   BEAT_4 + BEAT_8},
  {NOTE_G4,   BEAT_4},

  {NOTE_AS4,  BEAT_4},
  {NOTE_A4,   BEAT_4},
  {NOTE_G4,   BEAT_4},
  {NOTE_F4,   BEAT_4},

  // 4th line --------------
  {NOTE_E4,   BEAT_8},
  {NOTE_E4,   BEAT_16},
  {NOTE_F4,   BEAT_16},
  {NOTE_G4,   BEAT_4},
  {NOTE_G4,   BEAT_8},
  {NOTE_G4,   BEAT_16},
  {NOTE_A4,   BEAT_16},
  {NOTE_AS4,  BEAT_4},

  {NOTE_C5,   BEAT_8},
  {NOTE_C5,   BEAT_16},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_2 + BEAT_4},

};


static const Note melody_sub[length_sub] PROGMEM = {

  // 1st line --------------
  {NOTE_G4,   BEAT_4 + BEAT_8},
  {NOTE_C4,   BEAT_16},
  {NOTE_G4,   BEAT_16},
  {NOTE_F4,   BEAT_4 + BEAT_8},
  {NOTE_AS3,  BEAT_16},
  {NOTE_F4,   BEAT_16},

  {NOTE_E4,   BEAT_4 + BEAT_8},
  {NOTE_A3,   BEAT_16},
  {NOTE_E4,   BEAT_16},
  {NOTE_F4,   BEAT_4},
  {NOTE_G4,   BEAT_4},

  {NOTE_E4,   BEAT_4},
  {NOTE_F4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_C4,   BEAT_8},

  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_F4,   BEAT_4},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_F4,   BEAT_8},

  {NOTE_E4,   BEAT_4},
  {NOTE_F4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_C4,   BEAT_8},

  {NOTE_D4,   BEAT_8},
  {NOTE_D4,   BEAT_16},
  {NOTE_E4,   BEAT_16},
  {NOTE_F4,   BEAT_4},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_F4,   BEAT_8},

  // 2nd line --------------
  {NOTE_C5,   BEAT_4},
  {NOTE_AS4,  BEAT_8},
  {NOTE_C5,   BEAT_8},
  {NOTE_AS4,  BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_F4,   BEAT_8},

  {NOTE_AS4,  BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_F4,   BEAT_4},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_F4,   BEAT_8},

  {NOTE_C5,   BEAT_4},
  {NOTE_AS4,  BEAT_8},
  {NOTE_C5,   BEAT_8},
  {NOTE_AS4,  BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_F4,   BEAT_8},

  {NOTE_D4,   BEAT_8},
  {NOTE_D4,   BEAT_16},
  {NOTE_E4,   BEAT_16},
  {NOTE_F4,   BEAT_4},
  {NOTE_AS4,  BEAT_8},
  {NOTE_F4,   BEAT_16},
  {NOTE_AS4,  BEAT_16},
  {NOTE_D5,   BEAT_4},

  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},

  // 3rd line --------------
  {NOTE_F4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},

  {NOTE_C4,   BEAT_8},
  {NOTE_C4,   BEAT_16},
  {NOTE_D4,   BEAT_16},
  {NOTE_E4,   BEAT_4},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_C4,   BEAT_8},

  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_16},
  {NOTE_E4,   BEAT_16},
  {NOTE_F4,   BEAT_4},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_F4,   BEAT_8},

  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},

  {NOTE_D4,   BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},

  // 4th line --------------
  {NOTE_C4,   BEAT_8},
  {NOTE_C4,   BEAT_16},
  {NOTE_D4,   BEAT_16},
  {NOTE_E4,   BEAT_4},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_F4,   BEAT_8},

  {NOTE_G4,   BEAT_8},
  {NOTE_E4,   BEAT_16},
  {NOTE_G4,   BEAT_16},
  {NOTE_AS4,  BEAT_8},
  {NOTE_C5,   BEAT_8},
  {NOTE_AS4,  BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
   
};


const Melody gym = {
  false,
  {
    {melody_main, length_main},
    {melody_sub, length_sub}
  }
};
