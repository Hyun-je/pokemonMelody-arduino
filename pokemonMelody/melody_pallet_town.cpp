#include "melody_pallet_town.h"
#include "arduino.h"

static const unsigned int length_main = 75;
static const unsigned int length_sub = 114;


static const Note melody_main[length_main] PROGMEM = {

  // 1st line --------------
  {NOTE_D6,   BEAT_8},
  {NOTE_C6,   BEAT_8},
  {NOTE_B5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_G6,   BEAT_8},
  {NOTE_E6,   BEAT_8},
  {NOTE_FS6,  BEAT_8},
  {NOTE_E6,   BEAT_8},
  
  {NOTE_D6,   BEAT_4 + BEAT_8},
  {NOTE_B5,   BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_B5,   BEAT_8},

  {NOTE_C6,   BEAT_2 + BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_A5,   BEAT_8},

  // 2nd line --------------
  {NOTE_B5,   BEAT_4 + BEAT_8},
  {NOTE_C6,   BEAT_16},
  {NOTE_B5,   BEAT_16},
  {NOTE_A5,   BEAT_2},

  {NOTE_D6,   BEAT_8},
  {NOTE_C6,   BEAT_8},
  {NOTE_B5,   BEAT_8},
  {NOTE_D6,   BEAT_8},
  {NOTE_G6,   BEAT_8},
  {NOTE_FS6,  BEAT_8},
  {NOTE_FS6,  BEAT_8},
  {NOTE_G6,   BEAT_8},

  {NOTE_E6,   BEAT_4 + BEAT_8},
  {NOTE_D6,   BEAT_8},
  {NOTE_D6,   BEAT_2},

  {NOTE_C6,   BEAT_8},
  {NOTE_B5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_D6,   BEAT_8},
  {NOTE_C6,   BEAT_8},
  {NOTE_B5,   BEAT_8},
  {NOTE_A5,   BEAT_8},

  // 3rd line --------------
  {NOTE_G5,   BEAT_2},
  {0,         BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_B5,   BEAT_8},

  {NOTE_C6,   BEAT_2},
  {NOTE_D6,   BEAT_4 + BEAT_8},
  {NOTE_C6,   BEAT_8},
  
  {NOTE_B5,   BEAT_2 + BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_B5,   BEAT_8},

  {NOTE_C6,   BEAT_4},
  {NOTE_C6,   BEAT_4},
  {NOTE_D6,   BEAT_4 + BEAT_8},
  {NOTE_C6,   BEAT_16},
  {NOTE_D6,   BEAT_16},

  // 4th line --------------
  {NOTE_B5,   BEAT_2 + BEAT_8},
  {NOTE_B5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_G5,   BEAT_8},

  {NOTE_A5,   BEAT_2},
  {NOTE_E5,   BEAT_4},
  {NOTE_B5,   BEAT_4},

  {NOTE_A5,   BEAT_2},
  {NOTE_G5,   BEAT_4},
  {NOTE_E5,   BEAT_4},

  {NOTE_FS5,  BEAT_2},
  {NOTE_G5,   BEAT_4},
  {NOTE_B5,   BEAT_4},

  // 5th line --------------
  {NOTE_B5,   BEAT_4 + BEAT_8},
  {NOTE_C6,   BEAT_16},
  {NOTE_B5,   BEAT_16},
  {NOTE_A5,   BEAT_2},
  
};


static const Note melody_sub[length_sub] PROGMEM = {

  // 1st line --------------
  {NOTE_B4,   BEAT_4},
  {NOTE_C5,   BEAT_8},
  {NOTE_D5,   BEAT_4},
  {NOTE_G5,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_C5,   BEAT_8},

  {NOTE_B4,   BEAT_4},
  {NOTE_G4,   BEAT_8},
  {NOTE_D5,   BEAT_4},
  {NOTE_D5,   BEAT_8},
  {NOTE_C5,   BEAT_8},
  {NOTE_B4,   BEAT_8},

  {0,         BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_C5,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_C5,   BEAT_4},
  {0,         BEAT_4},

  // 2nd line --------------
  {0,         BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_C5,   BEAT_8}, 
  {NOTE_A4,   BEAT_8}, 
  {NOTE_B4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},

  {NOTE_B4,   BEAT_4},
  {NOTE_C5,   BEAT_8},
  {NOTE_D5,   BEAT_4},
  {NOTE_G5,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_C5,   BEAT_8},

  {NOTE_B4,   BEAT_4},
  {NOTE_G4,   BEAT_8},
  {NOTE_D5,   BEAT_4},
  {NOTE_D5,   BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},

  {NOTE_E5,   BEAT_4},
  {NOTE_D5,   BEAT_8},
  {NOTE_C5,   BEAT_4},
  {NOTE_A4,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_C5,   BEAT_8},

  // 3rd line --------------
  {NOTE_D5,   BEAT_8},
  {NOTE_C5,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_G4,   BEAT_4},
  {NOTE_FS4,  BEAT_4},

  {NOTE_C5,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_A4,   BEAT_8},

  {NOTE_B3,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_G4,   BEAT_8},

  {NOTE_C5,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_A4,   BEAT_8},

  // 4th line --------------
  {NOTE_B3,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_G4,   BEAT_8},

  {NOTE_A4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  
  {NOTE_A4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},

  {NOTE_FS4,  BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},

  // 5th line --------------
  {NOTE_G4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_D4,   BEAT_8},
  {NOTE_C4,   BEAT_8},
  {NOTE_D4,   BEAT_8},
  
};


const Melody pallet_town = {
  false,
  {
    {melody_main, length_main},
    {melody_sub, length_sub}
  }
};
