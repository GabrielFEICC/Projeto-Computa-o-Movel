#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

//definicao dos LED, buzzer e botoes
const int redLED = 10;
const int greenLED = 9;
const int buzzer = 13;
const int buttonYes = 2;
const int buttonNo = 3;
const int buttonStart = 8;

int ledSequence[10]; 
int playerSequence[10]; 
bool gameStarted = false; 

//frequencia dos sons no buzzer
int correctTone = 1000;
int wrongTone = 500;
int victoryTone = 1500;

//funcao para tocar os sons e parar o som
void playSound(int toneFrequency) {
  tone(buzzer, toneFrequency, 500);
  delay(500);
  noTone(buzzer);
}

//funcao para gerar leds aleatorios
void generateLEDSequence() {
  for (int i = 0; i < 10; i++) {
    ledSequence[i] = random(2);
  }
}
