#include "melody_route_1.h"
#include "arduino.h"

static const unsigned int length_main = 107;
static const unsigned int length_sub = 79;


static const Note melody_main[length_main] PROGMEM = {

  // 1st line --------------
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_G5,   BEAT_8 + BEAT_16},
  {NOTE_FS5,  BEAT_16},
  {NOTE_E5,   BEAT_4},
  {0,         BEAT_8},

  {NOTE_CS5,  BEAT_16},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_CS5,  BEAT_16},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_E5,   BEAT_8},

  {NOTE_CS5,  BEAT_16},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_FS5,  BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_16},
  {NOTE_D5,   BEAT_4},
  {NOTE_FS5,  BEAT_8},

  // 2st line --------------
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_G5,   BEAT_8 + BEAT_16},
  {NOTE_FS5,  BEAT_16},
  {NOTE_E5,   BEAT_4},
  {0,         BEAT_8},

  {NOTE_CS5,  BEAT_16},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_8},
  {NOTE_G5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_B4,   BEAT_8},

  {NOTE_CS5,  BEAT_8},
  {NOTE_B5,   BEAT_4},
  {NOTE_B4,   BEAT_32},
  {NOTE_CS5,  BEAT_32},
  {NOTE_B4,   BEAT_16},
  {NOTE_A4,   BEAT_16},
  {NOTE_CS5,  BEAT_16},
  {NOTE_D5,   BEAT_4},
  {0,         BEAT_8},

  // 3rd line --------------
  {NOTE_FS5,  BEAT_16},
  {NOTE_G5,   BEAT_16},
  {NOTE_A5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_D6,   BEAT_8},
  {NOTE_CS6,  BEAT_8},
  {NOTE_B5,   BEAT_8},

  {NOTE_CS6,  BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_D5,   BEAT_8 + BEAT_16},
  {NOTE_FS5,  BEAT_16},
  {NOTE_E5,   BEAT_4},
  {0,         BEAT_8},

  {NOTE_FS5,  BEAT_16},
  {NOTE_G5,   BEAT_16},
  {NOTE_A5,   BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_A5,   BEAT_8},
  {NOTE_D6,   BEAT_8},
  {NOTE_CS6,  BEAT_8},
  {NOTE_B5,   BEAT_8 + BEAT_16},

  {NOTE_G5,   BEAT_16},
  {NOTE_A5,   BEAT_8},
  {NOTE_D6,   BEAT_8},
  {NOTE_CS6,  BEAT_8},
  {NOTE_E6,   BEAT_8},
  {NOTE_D6,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  
};


static const Note melody_sub[length_sub] PROGMEM = {

  // 1st line --------------
  {0,         BEAT_4},
  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_4},
  {0,         BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_4},

  {0,         BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_16},
  {NOTE_CS5,  BEAT_16},
  {NOTE_B4,   BEAT_16},
  {NOTE_CS5,  BEAT_16},
  {NOTE_A4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_A4,   BEAT_4},

  {0,         BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_CS5,  BEAT_4},
  {0,         BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_CS5,  BEAT_4},

  {NOTE_A4,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_B4,   BEAT_8},
  {NOTE_CS5,  BEAT_4},
  {NOTE_A4,   BEAT_8},
  {NOTE_A4,   BEAT_4},

  // 2nd line --------------
  {0,         BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_4},
  {0,         BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_4},

  {0,         BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_D4,   BEAT_16},
  {NOTE_CS5,  BEAT_16},
  {NOTE_B4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_A4,   BEAT_4},

  {0,         BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_CS5,  BEAT_4},
  {0,         BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_E5,   BEAT_8},

  {NOTE_A4,   BEAT_8},
  {NOTE_G5,   BEAT_4},
  {NOTE_E5,   BEAT_4},
  {NOTE_FS5,  BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_A4,   BEAT_4},

  // 3rd line --------------
  {0,         BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_FS4,  BEAT_8},
  {NOTE_A4,   BEAT_4},
  {NOTE_B4,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  
  {NOTE_B4,   BEAT_4},
  {NOTE_A4,   BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_A4,   BEAT_4},
  {NOTE_G4,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  
  {NOTE_CS4,  BEAT_4},
  {NOTE_A4,   BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_A4,   BEAT_4},
  {NOTE_B4,   BEAT_8},
  {NOTE_G4,   BEAT_8},
  
  {NOTE_B4,   BEAT_4},
  {NOTE_D5,   BEAT_8},
  {NOTE_E5,   BEAT_8},
  {NOTE_CS5,  BEAT_8},
  {NOTE_D5,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  
};


const Melody route_1 = {
  true,
  {
    {melody_main, length_main},
    {melody_sub, length_sub}
  }
};
