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

//jogo da memoria nos leds
void showLEDSequence() {
  for (int i = 0; i < 10; i++) {
    if (ledSequence[i] == 0) {
      digitalWrite(redLED, HIGH);
    } else {
      digitalWrite(greenLED, HIGH);
    }
    delay(500); 
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, LOW);
    delay(500); 
  }
}

//verifica se o jogador acertou a sequencia dos LED
bool checkSequence(int currentStep) {
  return playerSequence[currentStep] == ledSequence[currentStep];
}

//fase da memoria
void memoryPhase() {
  lcd.clear();
  lcd.print("Fase da Memoria");
  delay(2000);
  
  generateLEDSequence();//gera uma sequencia aleatoria dos LED
  showLEDSequence();  //mostra a sequencia para o jogador 

  for (int i = 0; i < 10; i++) {
    bool inputReceived = false;

    //mostra no LCD
    lcd.clear();
    lcd.print("Acertos: ");
    lcd.print(i + 1);
