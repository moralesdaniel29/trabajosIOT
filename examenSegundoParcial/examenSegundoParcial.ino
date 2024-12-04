#include <DHT.h>
#include <DHT_U.h>

int rojo= 10;
int verde=9;
int azul=8;
int SENSOR = 2;
int temperatura;
int humedad;
DHT dht (SENSOR, DHT11);

void setup(){
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  dht.begin();

  Serial.begin(9600);
}

void loop(){
  temperatura = dht.readTemperature();
  humedad = dht.readHumidity();
  delay(1);
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.print("Humedad: ");
  Serial.print(humedad);
  delay(500);

 if (temperatura >= 29){
  //si es >= 29 rojo
  analogWrite(rojo, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 0);
  Serial.print("Hace calor: ");
  
  }else {
   //(temperatura <= 28) 
  //si es <= 28 azul
  analogWrite(rojo, 0);
  analogWrite(verde, 0);
  analogWrite(azul, 255);
  Serial.print("Hace frio: ");
  }
 
}
