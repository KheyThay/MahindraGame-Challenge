#include <LiquidCrystal.h>
// Define os bytes para o carro e obstáculos
byte carro[8] = {
B00100,
B01110,
B11111,
B10101,
B11111,
B01110,
B10101,
B00000
};

byte obstaculo1[8] = {
B10101,
B10100,
B00110,
B01010,
B10101,
B01010,
B01010,
B10101
};

byte obstaculo2[8] = {
B11110,
B01110,
B00010,
B00110,
B00110,
B11110,
B00010,
B01110
};

// Inicializa a biblioteca LiquidCrystal
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Variáveis globais do jogo
int jogo = 0;
int x = 0;
int obstaculos[4] = {24, 28, 32, 36};
int posicoesY[4];
int ultimaPosicaoY = 0;
unsigned long inicioJogo = 0;
