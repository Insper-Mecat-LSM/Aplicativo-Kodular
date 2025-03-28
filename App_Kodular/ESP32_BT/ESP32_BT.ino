#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "BluetoothSerial.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1);

#define BUZZER              2
#define LED_EXTERNO         18
#define BOTAO               5
#define NomeDaCafeteira     "Insper BT Coffee"

bool estadoBotao = 0;

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(9600);
  SerialBT.begin(NomeDaCafeteira); //Bluetooth device name
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_EXTERNO, OUTPUT);
  pinMode(BOTAO, INPUT_PULLDOWN);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Falha na alocação de SSD1306"));
    for(;;);
  }
  
  delay(1000);
  display.clearDisplay();
  display.setTextColor(WHITE);
}


void loop() {
  
  int sensorValue = analogRead(34);
  float temperatura = sensorValue * (3.3 / 4095.0) * 100;

  char leituraBT = ' ';
  if (SerialBT.available()) {
    leituraBT = SerialBT.read();
    if (leituraBT == 'A'){
      estadoBotao = true;
    }
    if (leituraBT == 'a'){
      estadoBotao = false;
    }
  }

  SerialBT.println(temperatura);

  if (digitalRead(BOTAO) == 1){
    estadoBotao = !estadoBotao;
  }



  
  display.clearDisplay();   
  display.setTextColor(WHITE);

  display.setCursor(15,0);
  display.setTextSize(1.5);
  display.println("CAFETEIRA INSPER");

  display.setCursor(0,16);
  display.print("Temp: ");
  display.setTextSize(1);
  // display.setCursor(75,16);
  display.print( temperatura );
  display.print(" ");
  // display.setTextSize(1);
  display.cp437(true);
  display.write(167);
  // display.setTextSize(1);
  display.print("C");
  display.setCursor(0,30);
  display.print("Cafeteira: ");

  
  if (estadoBotao == 1){
    digitalWrite(LED_EXTERNO, LOW);
    
    display.setCursor(60,30);
    display.print("On "); 
  }
  else{
    digitalWrite(LED_EXTERNO, HIGH);
    digitalWrite(BUZZER, LOW);
    
    display.setCursor(60,30);
    display.print("Off");
  }

  if (estadoBotao and temperatura >= 30){
    digitalWrite(LED_EXTERNO, HIGH);
    digitalWrite(BUZZER, HIGH);

  }



  
  display.display();

  
  delay(150);
}
