Este código utiliza um sensor ultrassônico para medir a distância e controlar LEDs e um buzzer com base na distância medida. Os LEDs piscam em ritmos diferentes e o buzzer emite som dependendo da distância detectada:
```
#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define buzz 6
#define echo A1
#define trig A0

unsigned duracao, distancia;

void setup(){
  
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
}
void ledson(int tempo){
     digitalWrite(led1, 1);
     digitalWrite(led2, 1);
     digitalWrite(led3, 1);
     digitalWrite(led4, 1);
     delay(tempo);
}
void ledsoff(int tempo){
     digitalWrite(led1, 0);
     digitalWrite(led2, 0);
     digitalWrite(led3, 0);
     digitalWrite(led4, 0);
     delay(tempo);
}
void loop(){
  
  digitalWrite(trig, 1);
  delayMicroseconds(10);
  digitalWrite(trig, 0);
  
  duracao = pulseIn(echo, 1);

  distancia = (duracao*0.0343)/2;
  
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // distancia no monitor serial só pra ter né KK   

  if(distancia >= 110 && distancia <= 130){
     ledson(1500);
     ledsoff(1500);
     
     noTone(buzz);
  }
  else if(distancia >= 88 && distancia <= 110){ 
     ledson(900);
     ledsoff(900);
     
     noTone(buzz);
  }
   else if(distancia >= 66 && distancia <= 88){ 
     ledson(350);
     ledsoff(350);
     
     noTone(buzz);
   }
   else if(distancia >= 44 && distancia <= 66){ 
     ledson(200);
     ledsoff(200);
     
     noTone(buzz);
    } 
   else if(distancia >= 22 && distancia <= 44){ 
     
     ledson(95);
     ledsoff(95);

     noTone(buzz);
   }
   else if(distancia <= 22){ 
     
     ledson(35);
     ledsoff(35);
     
     tone(buzz, 100, 10);
     tone(buzz, 3000, 10);
   }
   else{
     ledsoff(1);
     noTone(buzz);
  }
   delay(10);
  }
// ASS:ANDREYIFB
```
