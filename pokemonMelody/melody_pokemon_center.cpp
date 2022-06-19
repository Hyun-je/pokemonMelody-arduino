#include "melody_pokemon_center.h"
#include "arduino.h"

static const unsigned int length_main = 70;
static const unsigned int length_sub = 118;


static const Note melody_main[length_main] PROGMEM = {

  // 1st line --------------
  {NOTE_D5,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_A5,   BEAT_4},
  {NOTE_G5,   BEAT_4},
  {NOTE_FS5,  BEAT_8},

  {NOTE_E5,   BEAT_8},
  {NOTE_CS5,  BEAT_4 + BEAT_8},
  {NOTE_A4,   BEAT_4},
  {NOTE_E4,   BEAT_4},

  {NOTE_CS5,  BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_FS5,  BEAT_4},
  {NOTE_E5,   BEAT_4},
  {NOTE_CS5,  BEAT_8},

  {NOTE_D5,   BEAT_8},
  {NOTE_FS5,  BEAT_4 + BEAT_8},
  {NOTE_A4,   BEAT_4},
  {NOTE_E4,   BEAT_4},

  {NOTE_D5,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_A5,   BEAT_4},
  {NOTE_G5,   BEAT_4},
  {NOTE_FS5,  BEAT_8},

  // 2nd line --------------
  {NOTE_E5,   BEAT_8},
  {NOTE_CS5,  BEAT_4 + BEAT_8},
  {NOTE_A4,   BEAT_4},
  {NOTE_E4,   BEAT_4},

  {NOTE_CS5,  BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_FS5,  BEAT_4},
  {NOTE_E5,   BEAT_4},
  {NOTE_CS5,  BEAT_8},

  {NOTE_D5,   BEAT_4 + BEAT_8},
  {0,         BEAT_8},
  {NOTE_D4,   BEAT_4},
  {NOTE_E4,   BEAT_4},

  {NOTE_FS5,  BEAT_2},
  {NOTE_A5,   BEAT_2},

  {NOTE_G5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_E5,   BEAT_2},

  // 3rd line --------------
  {NOTE_CS5,  BEAT_2},
  {NOTE_E5,   BEAT_2},

  {NOTE_FS5,  BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_D5,   BEAT_2},

  {NOTE_FS5,  BEAT_2},
  {NOTE_A5,   BEAT_2},

  {NOTE_G5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_B5,   BEAT_2},

  {NOTE_A5,   BEAT_4},
  {NOTE_G5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_G5,   BEAT_2},

  {NOTE_FS5,  BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_D5,   BEAT_2},
    
};


static const Note melody_sub[length_sub] PROGMEM = {

// 1st line --------------
  {NOTE_FS4,  BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_D5,   BEAT_4},
  {NOTE_CS5,  BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},

  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},

  {NOTE_A4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_CS5,  BEAT_4},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},

  {NOTE_FS4,  BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},

  {NOTE_FS4,  BEAT_8},
  {NOTE_F4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_D5,   BEAT_4},
  {NOTE_CS5,  BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},

  // 2nd line --------------
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},

  {NOTE_A4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_CS5,  BEAT_4},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},

  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_B4,   BEAT_8},

  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_4},
  {NOTE_E4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},

  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_4},
  {NOTE_E4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},

  // 3rd line --------------
  {NOTE_G4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_4},
  {NOTE_CS4,  BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_G4,   BEAT_8},

  {NOTE_FS4,  BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},

  {NOTE_D5,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_B4,   BEAT_4},
  {NOTE_A4,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_D5,   BEAT_8},

  {NOTE_E5,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_CS5,  BEAT_4},
  {NOTE_B4,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_E5,   BEAT_8},

  {NOTE_CS5,  BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_4},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_G4,   BEAT_8},

  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_G4,   BEAT_8},
  
};


const Melody pokemon_center = {
  false,
  {
    {melody_main, length_main},
    {melody_sub, length_sub}
  }
};
