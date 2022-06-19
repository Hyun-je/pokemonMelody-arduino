#include "melody_pallet_town.h"
#include "melody_route_1.h"
#include "melody_pokemon_center.h"
#include "melody_gym.h"
#include "melody_route_24.h"


Melody *melody_select;
int melody_index[2] = {0, 0};
int melody_count[2] = {0, 0};


void noTone1() {
  
  TCCR1A = 0b00000000; // Normal port operation
  digitalWrite(9, LOW);
}

void tone1(float frequency) {

  if (frequency <= 0) {
    noTone1();
    return;
  }

  TCCR1A = 0b01000000; // Toggle on compare match
  TCCR1B = 0b00001010; // Set Prescaler 8 -> 2MHz
  
  unsigned short count = 2e6 / (2.f * frequency);
  OCR1AH = (count >> 8) & 0xFF;
  OCR1AL = (count >> 0) & 0xFF;
  
}

void noTone3() {
  
  TCCR3A = 0b00000000; // Normal port operation
  digitalWrite(5, LOW);
}

void tone3(float frequency) {

  if (frequency <= 0) {
    noTone3();
    return;
  }

  TCCR3A = 0b01000000; // Toggle on compare match
  TCCR3B = 0b00001010; // Set Prescaler 8 -> 2MHz
  
  unsigned short count = 2e6 / (2.f * frequency);
  OCR3AH = (count >> 8) & 0xFF;
  OCR3AL = (count >> 0) & 0xFF;
  
}


void setup() {

  // Port configuration (Timer 1)
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);

  // Port configuration (Timer 3)
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);

  randomSeed(analogRead(0));
  
  switch(random(0, 5)) {
    case 0:
      melody_select = &pallet_town;
      break;
      
    case 1:
      melody_select = &route_1;
      break;
      
    case 2:
      melody_select = &pokemon_center;
      break;

    case 3:
      melody_select = &gym;
      break;
      
    case 4:
      melody_select = &route_24;
      break;
  }

}

void loop() {

  for(int i = 0; i < 2; i++) {

    Note note;
    memcpy_P(&note, &melody_select->tracks[i].notes[melody_index[i]], sizeof(Note)); 
    
    if(melody_count[i] == 0) {
      if(i == 0)
        tone1(note.pitch);
      else
        tone3(note.pitch);
    }
    else if(melody_count[i] == note.beat * 0.75) {
      if(melody_select->staccato)
        if(i == 0)
          noTone1();
        else
          noTone3();
    }
  
    melody_count[i]++;
    memcpy_P(&note, &melody_select->tracks[i].notes[melody_index[i]], sizeof(Note));
    
    if(melody_count[i] == note.beat) {
      melody_index[i]++;
      melody_count[i] = 0;
    }
  
    if(melody_index[i] >= melody_select->tracks[i].length) {
      melody_index[i] = 0;
      melody_count[i] = 0;
    }
    
  }

  delay(10); // Adjust tempo

}
