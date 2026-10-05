#include <Arduino.h>
const int botao = 34;
const int potenciometro = 35;

const int led_r = 19; //vermelho
const int led_g = 18; //verde
const int led_b = 5;  //azul

void setup() { // roda uma vez
  pinMode(botao, INPUT);
  pinMode(potenciometro, INPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
  Serial.begin(115200); //boud rate  
}

bool estado_led = false;
void loop() { //loop infinito
//digital
    bool estado_botao = digitalRead(botao);
    Serial.print(estado_botao?"ligado | ":"desligado | ");
    if(estado_botao){
      estado_led = !estado_led; 
    }
    digitalWrite(led_r, estado_led); // true ou false | 1 ou 0 | HIGH ou LOW

//analogico
    int estado_pot = analogRead(potenciometro); //12 bit  //hue
    Serial.println(estado_pot);
    int saida = map(estado_pot, 0, 4095, 0, 255);
    analogWrite(led_b, saida);
}

// implemente uma função HUE que altera a cor de saida do led