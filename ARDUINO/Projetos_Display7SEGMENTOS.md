Contagem 1 ao 9 Automática
```
#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
int  TEMPO = 175;
void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop()
{
   // 1
  digitalWrite(A, 0);
  
  digitalWrite(B, 1);
               
  digitalWrite(C, 1);
  
  digitalWrite(D, 1);
  
  digitalWrite(E, 1);
  
  digitalWrite(F, 1);
  
  digitalWrite(G,  1);
  
  delay(TEMPO);
  // 2
  digitalWrite(A, 1);
  
  digitalWrite(B, 0);
               
  digitalWrite(C, 1);
  
  digitalWrite(D, 1);
  
  digitalWrite(E, 1);
  
  digitalWrite(F, 1);
  
  digitalWrite(G,  1);
  
  delay(TEMPO);

  // 3
  digitalWrite(A, 1);
  
  digitalWrite(B, 1);
               
  digitalWrite(C, 1);
  
  digitalWrite(D, 1);
  
  digitalWrite(E, 1);
  
  digitalWrite(F, 1);
  
  digitalWrite(G,  0);
  
  delay(TEMPO);
  
  // 4
  digitalWrite(A, 1);
  
  digitalWrite(B, 1);
               
  digitalWrite(C, 1);
  
  digitalWrite(D, 1);
  
  digitalWrite(E, 0);
  
  digitalWrite(F, 1);
  
  digitalWrite(G,  1);
  
  delay(TEMPO);
  
  //5
  digitalWrite(A, 1);
  
  digitalWrite(B, 1);
               
  digitalWrite(C, 1);
  
  digitalWrite(D, 0);
  
  digitalWrite(E, 1);
  
  digitalWrite(F, 1);
  
  digitalWrite(G,  1);
  delay(TEMPO);
  
  //6
  digitalWrite(A, 1);
  
  digitalWrite(B, 1);
               
  digitalWrite(C, 0);
  
  digitalWrite(D, 1);
  
  digitalWrite(E, 1);
  
  digitalWrite(F, 1);
  
  digitalWrite(G,  1);
  
  delay(TEMPO);
  
  //8
  digitalWrite(A, 1);
  
  digitalWrite(B, 1);
               
  digitalWrite(C, 1);
  
  digitalWrite(D, 1);
  
  digitalWrite(E, 1);
  
  digitalWrite(F, 1);
  
  digitalWrite(G,  0);
  delay(TEMPO);
  
  //9
  digitalWrite(A, 1);
  
  digitalWrite(B, 1);
               
  digitalWrite(C, 1);
  
  digitalWrite(D, 1);
  
  digitalWrite(E, 1);
  
  digitalWrite(F, 0);
  
  digitalWrite(G,  1);
  
  delay(TEMPO);
  
  
}
```
Contagem regressiva e progressiva do 0 ao 9 MANUALMENTE
Materias: Display, resistores, buzzer, 2 botões, jumpers, arduino, proboard, 2 leds pra cada botão(opcional).
```
#define BUZZER 2
#define MAIS 3
#define MENOS 4

#define a 6
#define b 5
#define c 7
#define d 8
#define e 12
#define f 10
#define g 13

int numero = 0;

int ESTADOatualMAIS;
int ESTADOanteriorMAIS = LOW;

int ESTADOatualMENOS;
int ESTADOanteriorMENOS = LOW;

void limparDisplay(){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
}

void display(int numero){

  limparDisplay();

  switch(numero){
      case 1:
        digitalWrite(a,1);
    	  digitalWrite(b,0);
    	  digitalWrite(c,0);
        digitalWrite(d,1);
        digitalWrite(e,1);
        digitalWrite(f,1);
        digitalWrite(g,1);
        break;
                 
      case 2:       
    	  digitalWrite(a,0); 
		    digitalWrite(b,0);                
        digitalWrite(g,0);      
        digitalWrite(d,0);         
    	  digitalWrite(e,0);
        break;
                     
      case 3:
        digitalWrite(a,0); 
        digitalWrite(b,0);
        digitalWrite(c,0);
        digitalWrite(d,0); 
        digitalWrite(g,0);          
        break;
                     
      case 4:
        digitalWrite(b,0);
        digitalWrite(c,0);
        digitalWrite(f,0);
        digitalWrite(g,0);             
        break;
                     
      case 5:
        digitalWrite(a,0);
        digitalWrite(c,0);
        digitalWrite(d,0);
        digitalWrite(f,0);
        digitalWrite(g,0);
        break;

      case 6:
        digitalWrite(a,0);
        digitalWrite(c,0);
        digitalWrite(d,0);
        digitalWrite(e,0);
        digitalWrite(f,0);
        digitalWrite(g,0);
        break;

      case 7:
        digitalWrite(a,0);
        digitalWrite(b,0);
        digitalWrite(c,0);
	      break;

	    case 8:
        digitalWrite(a,0);
        digitalWrite(b,0);
        digitalWrite(c,0);
        digitalWrite(d,0);
        digitalWrite(e,0);
        digitalWrite(f,0);
        digitalWrite(g,0);
        break;

      case 9:
        digitalWrite(a,0);
        digitalWrite(b,0);
        digitalWrite(c,0);
        digitalWrite(d,0);
        digitalWrite(f,0);
        digitalWrite(g,0);
        break;

      default:
        digitalWrite(a,0);
        digitalWrite(b,0);
        digitalWrite(c,0);
        digitalWrite(d,0);
        digitalWrite(e,0);
        digitalWrite(f,0);
        break;
  }}
  void setup(){
  //ENTRADAS
  pinMode(MAIS,INPUT);
  pinMode(MENOS,INPUT);
  //BUZZER
  pinMode(BUZZER,OUTPUT);
  //DISPLAY
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}
  void loop(){
  ESTADOatualMAIS = digitalRead(MAIS);
  ESTADOatualMENOS = digitalRead(MENOS);

  if(ESTADOanteriorMAIS == LOW && ESTADOatualMAIS == HIGH){
    
    numero++;
    tone(BUZZER, 1000, 40);
    }
  
  if(ESTADOanteriorMENOS == LOW && ESTADOatualMENOS == HIGH){
    
    numero--;
    tone(BUZZER, 500, 40);
    } 

  // CASO O NUMERO SEJA MENOR QUE 0 OU MAIOR QUE 9
  if(numero > 9){
    numero = 0;}

  if(numero < 0){
    numero = 9;
    }

  ESTADOanteriorMAIS = ESTADOatualMAIS;

  ESTADOanteriorMENOS = ESTADOatualMENOS;

  limparDisplay();
  display(numero);
  
}
//ASS ANDREY 31/07
```
<img width="760" height="722" alt="image" src="https://github.com/user-attachments/assets/ec790534-2428-4505-a6f9-38919bfa3824" />


