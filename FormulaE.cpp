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

void setup() {
    lcd.begin(16, 2);
    lcd.createChar(0, carro);
    lcd.createChar(1, obstaculo1);
    lcd.createChar(2, obstaculo2);

    Serial.begin(9600);
    pinMode(A0, INPUT);
    pinMode(A1, INPUT);

    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(13, OUTPUT);

    pinMode(7, OUTPUT);

    for (int i = 0; i < 4; i++) {
        posicoesY[i] = random(0, 2);
    }
}
void loop() {
if (jogo == 0) {
contarRegressivamente();
} else if (jogo == 1) {
moverObstaculos();
atualizarTela();
tocarMusica();

for (int i = 0; i < 4; i++) {
if (obstaculos[i] <= 0) {
obstaculos[i] = 16;
verificarColisao(posicoesY[i]);
posicoesY[i] = novaPosicaoYAleatoria(ultimaPosicaoY);
ultimaPosicaoY = posicoesY[i];
}
}

delay(calcularDelay());
}
}

void contarRegressivamente() {
lcd.clear();
lcd.setCursor(4, 0);
lcd.print("Preparado?");
delay(1000);

lcd.clear();
lcd.setCursor(7, 0);
lcd.print("3");
digitalWrite(8, HIGH); // Acende LED Vermelho 1
tocarSom(1000, 200); // Toca som
delay(800);
digitalWrite(8, LOW); // Apaga LED Vermelho 1

lcd.clear();
lcd.setCursor(7, 0);
lcd.print("2");
digitalWrite(9, HIGH); // Acende LED Vermelho 2
tocarSom(1000, 200); // Toca som
delay(800);
digitalWrite(9, LOW); // Apaga LED Vermelho 2

lcd.clear();
lcd.setCursor(7, 0);
lcd.print("1");
digitalWrite(10, HIGH); // Acende LED Amarelo
tocarSom(1000, 200); // Toca som
delay(800);
digitalWrite(10, LOW); // Apaga LED Amarelo

lcd.clear();
lcd.setCursor(6, 0);
lcd.print("Go!");
digitalWrite(13, HIGH); // Acende LED Verde
tocarSom(2000, 400); // Toca som mais forte
delay(600);
digitalWrite(13, LOW); // Apaga LED Verde

jogo = 1;
inicioJogo = millis();
}

void moverObstaculos() {
for (int i = 0; i < 4; i++) {
obstaculos[i] -= 1;
}
}

void atualizarTela() {
lcd.clear();

int carroY = (analogRead(A0) > 50) ? 0 : 1;
lcd.setCursor(0, carroY);
lcd.write(byte(0));

for (int i = 0; i < 4; i++) {
if (obstaculos[i] >= 0) {
lcd.setCursor(obstaculos[i], posicoesY[i]);
lcd.write(byte(i % 2 + 1));
}
}
}
void verificarColisao(int y) {
int carroY = (analogRead(A0) > 50) ? 0 : 1;
if (carroY == y) {
jogo = 0;
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Voce Bateu!");
delay(3000);
reiniciarJogo();
}
}

void reiniciarJogo() {
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Reiniciando...");
delay(2000);
jogo = 1;
x = 0;
for (int i = 0; i < 4; i++) {
obstaculos[i] = 24 + i * 4;
}
}
int novaPosicaoYAleatoria(int ultimoY) {
return (random(0, 2) == 0) ? ultimoY : 1 - ultimoY;
}
int calcularDelay() {
return max(50, 500 - (analogRead(A1) / 2));
}
