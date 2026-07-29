Contagem 1 ao 9
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



