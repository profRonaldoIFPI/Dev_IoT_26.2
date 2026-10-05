#include <Arduino.h>

const int botao = 34;
const int potenciometro = 35;

const int led_r = 19; //vermelho
const int led_g = 18; //verde
const int led_b = 5;  //azul

bool estado_led = false;

void hueColor(int hue); //prototipo

void setup() { // roda uma vez
  pinMode(botao, INPUT);
  pinMode(potenciometro, INPUT);
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
  Serial.begin(115200); //boud rate  
}


void loop() { //loop infinito
//digital
    bool estado_botao = false;
    while(digitalRead(botao)){ // elimina ou reduz o bounce
      estado_botao = true;
    }
    if(estado_botao){
      estado_led = !estado_led; 
    }
    Serial.print(estado_led ?"ligado | ":"desligado | ");

//analogico
    int estado_pot = analogRead(potenciometro); //12 bit = 0 a 4095
    int saida = map(estado_pot, 0, 4095, 0, 255);
    // analogWrite(led_b, saida);
    Serial.print(saida);
    Serial.print(" | ");
    hueColor(saida);
}

// implemente uma função HUE que altera a cor de saida do led

void hueColor(int hue) { //valores entre 0 e 255
  int r, g, b;

  // Converte a posição atual da "roda de cores" (0-255) em valores RGB
  if (hue < 85) {
    r = 255 - hue * 3;
    g = 0;
    b = hue * 3;
  } else if (hue < 170) {
    int pos = hue - 85;
    r = 0;
    g = pos * 3;
    b = 255 - pos * 3;
  } else {
    int pos = hue - 170;
    r = pos * 3;
    g = 255 - pos * 3;
    b = 0;
  }
  Serial.print("rgb(");
  Serial.print(r);
  Serial.print(",");
  Serial.print(g);
  Serial.print(",");
  Serial.print(b);
  Serial.println(")");
  if(estado_led){ //liga de acordo com o hue
    analogWrite(led_r, r);
    analogWrite(led_g, g);
    analogWrite(led_b, b);
  } else { // desliga os leds
    analogWrite(led_r, 0);
    analogWrite(led_g, 0);
    analogWrite(led_b, 0);
  }
}