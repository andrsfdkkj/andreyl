Componentes: 3 Leds (vermelho, verde, amarelo), 1 botão, arduino UNO, protoboard, jumpers e paciência pra entender millis...
```
#define verde 9
#define amarelo 8
#define vermelho 7

#define botao 2

int estadoAnterior = LOW;
int estadoAtual;
bool ligado = false;

unsigned long tempoAnterior = 0;

int etapa = 0;
// 0 = verde
// 1 = amarelo
// 2 = vermelho

void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);

  pinMode(botao, INPUT);
}

void loop()
{
  // ===== BOTÃO =====
  estadoAtual = digitalRead(botao);

  if (estadoAnterior == LOW && estadoAtual == HIGH)
  {
    ligado = !ligado;

    // Se desligou, apaga tudo
    if (ligado == false)
    {
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
    }

    // Se ligou, começa pelo verde
    else
    {
      etapa = 0;
      tempoAnterior = millis();

      digitalWrite(verde, HIGH);
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, LOW);
    }
  }

  estadoAnterior = estadoAtual;


  // ===== SEMÁFORO =====
  if (ligado == true)
  {
    unsigned long tempoAtual = millis();

    // VERDE → 7 segundos
    if (etapa == 0 && tempoAtual - tempoAnterior >= 7000)
    {
      digitalWrite(verde, LOW);
      digitalWrite(amarelo, HIGH);

      etapa = 1;
      tempoAnterior = tempoAtual;
    }

    // AMARELO → 3 segundos
    if (etapa == 1 && tempoAtual - tempoAnterior >= 3000)
    {
      digitalWrite(amarelo, LOW);
      digitalWrite(vermelho, HIGH);

      etapa = 2;
      tempoAnterior = tempoAtual;
    }

    // VERMELHO → 7 segundos
    if (etapa == 2 && tempoAtual - tempoAnterior >= 7000)
    {
      digitalWrite(vermelho, LOW);
      digitalWrite(verde, HIGH);

      etapa = 0;
      tempoAnterior = tempoAtual;
    }
```
  }
}
