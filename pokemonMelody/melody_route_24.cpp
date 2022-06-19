#include "melody_route_24.h"
#include "arduino.h"

static const unsigned int length_main = 56;
static const unsigned int length_sub = 104;


static const Note melody_main[length_main] PROGMEM = {

  // 1st line --------------
  {NOTE_E5,   BEAT_4 + BEAT_8},
  {NOTE_B4,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_4 + BEAT_8},
  {NOTE_A5,   BEAT_8},

  {NOTE_GS5,  BEAT_8 + BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_4 + BEAT_8},
  {0,         BEAT_8},
  {NOTE_DS4,  BEAT_4},

  {NOTE_E5,   BEAT_4 + BEAT_8},
  {NOTE_B4,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_4 + BEAT_8},
  {NOTE_A5,   BEAT_8},

  // 2rd line --------------
  {NOTE_GS5,  BEAT_8 + BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_B5,   BEAT_4 + BEAT_8},
  {0,         BEAT_8},
  {NOTE_GS4,  BEAT_4},

  {NOTE_CS6,  BEAT_4 + BEAT_8},
  {NOTE_B5,   BEAT_16},
  {NOTE_A5,   BEAT_16},
  {NOTE_B5,   BEAT_4 + BEAT_8},
  {NOTE_A5,   BEAT_16},
  {NOTE_GS5,  BEAT_16},

  // 3rd line --------------
  {NOTE_A5,   BEAT_4 + BEAT_8},
  {NOTE_GS5,  BEAT_16},
  {NOTE_FS5,  BEAT_16},
  {NOTE_GS5,  BEAT_4},
  {NOTE_FS5,  BEAT_8},
  {NOTE_E5,   BEAT_8},

  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_4 + BEAT_8},
  {0,         BEAT_8},
  {NOTE_A5,   BEAT_4},

  // 4th line --------------
  {NOTE_GS5,  BEAT_8 + BEAT_16},
  {NOTE_FS5,  BEAT_16},
  {NOTE_E5,   BEAT_4 + BEAT_8},
  {0,         BEAT_8},
  {NOTE_FS5,  BEAT_8},
  {NOTE_E5,   BEAT_8},

  {NOTE_D5,   BEAT_8},
  {NOTE_D5,   BEAT_16},
  {NOTE_E5,   BEAT_16},
  {NOTE_FS5,  BEAT_8},
  {NOTE_FS5,  BEAT_16},
  {NOTE_GS5,  BEAT_16},
  {NOTE_A5,   BEAT_4},
  {NOTE_CS6,  BEAT_4},

  // 5th line --------------
  {NOTE_B5,   BEAT_8 + BEAT_16},
  {NOTE_A5,   BEAT_16},
  {NOTE_GS5,  BEAT_2},
  {0,         BEAT_4},
  
};


static const Note melody_sub[length_sub] PROGMEM = {

  // 1st line --------------
  {NOTE_B3,   BEAT_8 + BEAT_16},
  {0,         BEAT_16},
  {NOTE_GS4,  BEAT_8 + BEAT_16},
  {0,         BEAT_8 + BEAT_16},
  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_DS4,  BEAT_16},
  {NOTE_FS4,  BEAT_16},

  {NOTE_E4,   BEAT_8},
  {NOTE_B3,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_GS4,  BEAT_8 + BEAT_16},
  {0,         BEAT_16},
  {NOTE_FS4,  BEAT_8 + BEAT_16},
  {0,         BEAT_16},

  {NOTE_B3,   BEAT_8 + BEAT_16},
  {0,         BEAT_16},
  {NOTE_GS4,  BEAT_8 + BEAT_16},
  {0,         BEAT_8 + BEAT_16},
  {NOTE_FS4,  BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_DS4,  BEAT_16},
  {NOTE_FS4,  BEAT_16},

  // 2nd line --------------
  {NOTE_B4,   BEAT_8},
  {NOTE_B3,   BEAT_8},
  {NOTE_E4,   BEAT_8},
  {NOTE_A4,   BEAT_8},
  {NOTE_GS4,  BEAT_8 + BEAT_16},
  {0,         BEAT_16},
  {NOTE_B4,   BEAT_8 + BEAT_16},
  {0,         BEAT_16},

  {NOTE_E5,   BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_DS5,  BEAT_12},
  {NOTE_GS4,  BEAT_12},
  {NOTE_DS5,  BEAT_12},
  {NOTE_DS5,  BEAT_12},
  {NOTE_GS4,  BEAT_12},
  {NOTE_DS5,  BEAT_12},

  // 3rd line --------------
  {NOTE_CS5,  BEAT_12},
  {NOTE_FS4,  BEAT_12},
  {NOTE_CS5,  BEAT_12},
  {NOTE_CS5,  BEAT_12},
  {NOTE_FS4,  BEAT_12},
  {NOTE_CS5,  BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E4,   BEAT_12},
  {NOTE_GS4,  BEAT_12},

  {NOTE_FS4,  BEAT_12},
  {NOTE_GS4,  BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_FS4,  BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_FS4,  BEAT_12},
  {NOTE_GS4,  BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_FS4,  BEAT_12},
  {NOTE_A4,   BEAT_12},
  
  // 4th line --------------
  {NOTE_GS4,  BEAT_12},
  {NOTE_E4,   BEAT_12}, 
  {NOTE_B4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E4,   BEAT_12},
  {NOTE_B4,   BEAT_12},

  {NOTE_A4,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_A4,   BEAT_12},
  {NOTE_CS5,  BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_CS5,  BEAT_12},
  {NOTE_D5,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_D5,   BEAT_12},
  {NOTE_FS5,  BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_DS5,  BEAT_12},

  // 5th line --------------
  {NOTE_E5,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  {NOTE_B4,   BEAT_12},
  {NOTE_E5,   BEAT_12},
  
};


const Melody route_24 = {
  false,
  {
    {melody_main, length_main},
    {melody_sub, length_sub}
  }
};
