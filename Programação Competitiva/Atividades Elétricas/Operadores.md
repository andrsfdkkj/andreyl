## ATIVIDADE 01

```
#include <stdio.h>
int main(){
    int a;
    printf("Digite um numero!\n");
     scanf("%d", &a);
    printf("Em relacao ao seu numero, aqui esta o:\nsucessor: '%d' e o antecessor: '%d' do seu numero.\n\nTmj!\n", a + 1, a -1);
return 0;}
```
## Atividade 02
```
#include <stdio.h> 
int main(){
    double pi;
    scanf("%lf", &pi);
    printf("A quinta parte do numero: %.10lf\n", pi/5);
return 0;}
```

## Atividade 03
```
#include <stdio.h>
int main(){
    int code, emotion, codeemotion;
    scanf("%d%d%d", &code, &emotion, &codeemotion);
    printf("%d + %d + %d\nSoma dos 3 ngc ai %d\n", code, emotion, codeemotion, code + emotion + codeemotion);
return 0;}

```
## Atividade 04
```
#include <stdio.h>
int main(){
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    printf("Medida aritmetica dos ngc ai: %.5f\n",(a+b+c+d)/4);
return 0;}

```
## Atividade 05
```
#include <stdio.h>
int main(){
    int ano, idade, anatu;
    scanf("%d%d", &anatu, &idade);
    printf("Data de nascimento: %d\n", ano = anatu - idade);
return 0;}

```
## Atividade 06
```
#include <stdio.h>
int main(){
    double vel, conv;
    scanf("%lf", &vel);
    printf("Conversao pra m/s: %.2lf\n",conv = (vel)/3.6);
return 0;}

```
## Atividade 07
```
#include <stdio.h>
int main(){
    double real, dola, cota;
    printf("Valor em Real, e a cotacao do dia:\n");
    scanf("%lf%lf",&real,&cota);
    printf("Valor em Dolar: %.3lf\n",dola = real/cota) ;
return 0;}

```
## Atividade 08
```
#include <stdio.h>
int main(){
    double celso, fah;
    printf("Escreva um valor em Celsius:\n");
    scanf("%lf",&celso);
    printf("Este valor em Fahrenheit: %.3lf\n", fah = celso * (9.0/5.0) + 32.0);
return 0;}

```
## Atividade 09
```
#include <stdio.h>
int main(){
    double pi = 3.14159, gugrau, rad;
    printf("Escreva um angulo em graus:\n");
    scanf("%lf",&gugrau);
    printf("Este valor em radianos: %.5lf\n", rad = (gugrau*pi)/180);
return 0;}
```
## Atividade 9.1
```
#include <stdio.h>
int main(){
    int x = 780000, p = x * 0.46, s = x * 0.32, a =  p + s,t = x % a ;
    printf("P: %d\nS: %d\nT: %d\n", p, s, t);return 0;}

```
