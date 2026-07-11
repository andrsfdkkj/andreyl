Piratas do caribe, do re mi fa, musica top, odeAlegria:
```
#define buz 2
#define b1 7
#define b2 4
#define b3 5
#define b4 8

#define DO 523
#define RE 587
#define MI 659
#define FA 698
#define SOL 784
#define LA 880
#define SI 988

#define DO2 1047
#define RE2 1175
#define MI2 1319
#define FA2 1397
#define SOL2 1568
#define LA2 1760
#define SI2 1976

void tocar(int nota, int tempo){
  tone(buz, nota, tempo);
  delay(tempo + 30);
}

void pausa(int tempinho){

  noTone(buz);
  delay(tempinho);
}

void tocarMusica(int nota, int duracao, int pausaExtra){

  tone(buz, nota, duracao);
  delay(duracao);
  noTone(buz);
  delay(pausaExtra);

}

void aventuraGrande(){

  // Introdução
  tocarMusica(DO,180,40);
  tocarMusica(MI,180,40);
  tocarMusica(SOL,220,60);
  tocarMusica(DO2,450,180);

  tocarMusica(LA,180,40);
  tocarMusica(SOL,180,40);
  tocarMusica(MI,220,60);
  tocarMusica(DO,350,150);

  // Parte A
  tocarMusica(DO,180,30);
  tocarMusica(RE,180,30);
  tocarMusica(MI,180,30);
  tocarMusica(FA,180,30);
  tocarMusica(SOL,300,80);

  tocarMusica(MI,180,30);
  tocarMusica(RE,180,30);
  tocarMusica(DO,350,80);

  tocarMusica(RE,180,30);
  tocarMusica(FA,180,30);
  tocarMusica(LA,280,60);

  tocarMusica(SOL,180,30);
  tocarMusica(MI,180,30);
  tocarMusica(RE,350,120);

  // Subida
  tocarMusica(DO,100,20);
  tocarMusica(RE,100,20);
  tocarMusica(MI,100,20);
  tocarMusica(FA,100,20);
  tocarMusica(SOL,100,20);
  tocarMusica(LA,100,20);
  tocarMusica(SI,100,20);
  tocarMusica(DO2,350,150);

  // Refrão
  tocarMusica(DO2,200,40);
  tocarMusica(SOL,180,30);
  tocarMusica(LA,180,30);
  tocarMusica(SOL,180,30);

  tocarMusica(MI,220,40);
  tocarMusica(RE,180,30);
  tocarMusica(DO,350,120);

  tocarMusica(MI,180,30);
  tocarMusica(SOL,180,30);
  tocarMusica(LA,180,30);
  tocarMusica(DO2,280,40);

  tocarMusica(LA,220,30);
  tocarMusica(SOL,180,30);
  tocarMusica(MI,350,120);

  // Ponte
  tocarMusica(RE,150,20);
  tocarMusica(MI,150,20);
  tocarMusica(FA,150,20);
  tocarMusica(SOL,220,30);

  tocarMusica(FA,150,20);
  tocarMusica(MI,150,20);
  tocarMusica(RE,250,40);

  tocarMusica(DO,180,20);
  tocarMusica(MI,180,20);
  tocarMusica(SOL,180,20);
  tocarMusica(DO2,350,80);

  // Final
  tocarMusica(LA,180,30);
  tocarMusica(SOL,180,30);
  tocarMusica(MI,180,30);
  tocarMusica(RE,180,30);

  tocarMusica(DO,500,200);

  tocarMusica(MI,180,30);
  tocarMusica(SOL,180,30);
  tocarMusica(DO2,700,300);
}

void odeAlegria(){

  // Mi Mi Fá Sol
  tocar(MI,200); pausa(50);
  tocar(MI,200); pausa(50);
  tocar(FA,200); pausa(50);
  tocar(SOL,200); pausa(150);

  // Sol Fá Mi Ré
  tocar(SOL,200); pausa(50);
  tocar(FA,200); pausa(50);
  tocar(MI,200); pausa(50);
  tocar(RE,200); pausa(150);

  // Dó Dó Ré Mi
  tocar(DO,200); pausa(50);
  tocar(DO,200); pausa(50);
  tocar(RE,200); pausa(50);
  tocar(MI,200); pausa(150);

  // Mi Ré Ré
  tocar(MI,250); pausa(50);
  tocar(RE,200); pausa(50);
  tocar(RE,350); pausa(200);

  // Mi Mi Fá Sol
  tocar(MI,200); pausa(50);
  tocar(MI,200); pausa(50);
  tocar(FA,200); pausa(50);
  tocar(SOL,200); pausa(150);

  // Sol Fá Mi Ré
  tocar(SOL,200); pausa(50);
  tocar(FA,200); pausa(50);
  tocar(MI,200); pausa(50);
  tocar(RE,200); pausa(150);

  // Dó Dó Ré Mi
  tocar(DO,200); pausa(50);
  tocar(DO,200); pausa(50);
  tocar(RE,200); pausa(50);
  tocar(MI,200); pausa(150);

  // Ré Dó Dó
  tocar(RE,250); pausa(50);
  tocar(DO,250); pausa(50);
  tocar(DO,450); pausa(300);
}

void piratas(){

  tocar(MI,180); pausa(30);
  tocar(SOL,180); pausa(30);
  tocar(LA,300); pausa(100);

  tocar(LA,180); pausa(30);
  tocar(SI,180); pausa(30);
  tocar(DO2,300); pausa(100);

  tocar(DO2,180); pausa(30);
  tocar(RE2,180); pausa(30);
  tocar(SI,400); pausa(120);

  tocar(LA,180); pausa(30);
  tocar(SOL,180); pausa(30);
  tocar(LA,500);
}


void doReMi(){

  // Dó Ré Mi Fá Fá Fá
  tocar(DO,200); pausa(50);
  tocar(RE,200); pausa(50);
  tocar(MI,200); pausa(50);
  tocar(FA,200); pausa(50);
  tocar(FA,200); pausa(50);
  tocar(FA,350); pausa(150);

  // Dó Ré Dó Ré Ré Ré
  tocar(DO,200); pausa(50);
  tocar(RE,200); pausa(50);
  tocar(DO,200); pausa(50);
  tocar(RE,200); pausa(50);
  tocar(RE,200); pausa(50);
  tocar(RE,350); pausa(150);

  // Ré Mi Fá Sol Sol Sol
  tocar(RE,200); pausa(50);
  tocar(MI,200); pausa(50);
  tocar(FA,200); pausa(50);
  tocar(SOL,200); pausa(50);
  tocar(SOL,200); pausa(50);
  tocar(SOL,350); pausa(150);
}
void setup() {
  pinMode(buz, OUTPUT);
  pinMode(b1, INPUT);  
  pinMode(b2, INPUT);  
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);  
}
void loop() {
  if(digitalRead(b1)){
    odeAlegria();
  }
  else if(digitalRead(b2)){
    piratas();
  }
  else if(digitalRead(b3) == HIGH){
    doReMi();
  }
  else if(digitalRead(b4) == HIGH){
    aventuraGrande();
  }
  else{
    noTone(buz);
  } 
  delay(10);
}
```


