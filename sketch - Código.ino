#include <DHT.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 7
#define DHTTYPE DHT22

#define MQ2 A0

#define LED_VERDE 2
#define LED_AMARELO 3
#define LED_VERMELHO 4

#define BUZZER 8

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  Serial.begin(9600);

  dht.begin();

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("ORBITALFIRE");
  lcd.setCursor(0,1);
  lcd.print("INICIANDO...");
  delay(2000);
}

void loop() {

  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  int fumaca = analogRead(MQ2);

  Serial.print("Temperatura: ");
  Serial.println(temperatura);

  Serial.print("Umidade: ");
  Serial.println(umidade);

  Serial.print("Fumaca: ");
  Serial.println(fumaca);

  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);

  noTone(BUZZER);

  lcd.clear();

if (temperatura < 30 && fumaca < 750) {

  digitalWrite(LED_VERDE, HIGH);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ORBITALFIRE");
  lcd.setCursor(0,1);
  lcd.print("RISCO BAIXO");
}


else if ((temperatura >= 30 && temperatura < 40) ||
         (fumaca >= 750 && fumaca < 900)) {

  digitalWrite(LED_AMARELO, HIGH);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ORBITALFIRE");
  lcd.setCursor(0,1);
  lcd.print("RISCO MEDIO");
}


else {

  digitalWrite(LED_VERMELHO, HIGH);

  tone(BUZZER, 1000);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("ALERTA FOGO!");
  lcd.setCursor(0,1);
  lcd.print("RISCO CRITICO");
}
delay(1000);
}