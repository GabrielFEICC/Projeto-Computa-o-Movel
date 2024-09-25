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

//ira comecar quando o jogador apertar o botao de start
    while (!inputReceived) {
      if (readButtonYes()) {
        playerSequence[i] = 1; 
        inputReceived = true;
      } else if (readButtonNo()) {
        playerSequence[i] = 0;  
        inputReceived = true;
      }
    }

    //verifica se o jogador esta acertando a sequencia
    if (!checkSequence(i)) {
      playSound(wrongTone); //caso errre toca o som de erro
      lcd.clear();
      lcd.print("Errado:  ");
      lcd.print(i + 1); //mostra em qual numero da sequencia o jogador errou
      delay(2000);
      lcd.clear();
      lcd.print("Fim de Jogo!");
      delay(2000);
      return;  
    } else {
      playSound(correctTone); //toca o som de acerto
    }
  }

//verfica se o jogador acertou a sequencia
  playSound(victoryTone);
  lcd.clear();
  lcd.print("Parabens, voce concluiu essa etapa!");
  delay(2000);
}

//funcao para fazer o botao "yes" funcionar
bool readButtonYes() {
  return digitalRead(buttonYes) == LOW;
}

//funcao para fazer o botao "no" funcionar
bool readButtonNo() {
  return digitalRead(buttonNo) == LOW;
}

void setup() {
  lcd.begin(16, 2);
  //definindo os pinMode dos LED
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  //definindo os pinMode dos Botoes
  pinMode(buttonYes, INPUT_PULLUP);
  pinMode(buttonNo, INPUT_PULLUP);
  pinMode(buttonStart, INPUT_PULLUP);
  
  randomSeed(analogRead(0));
  
  lcd.print("Clique no Botao de Start");
}
