#include <stdio.h>
 
int main() {
    int tmp, vm;
    double lito, dist;
    scanf("%d%d", &tmp, &vm);
    
    dist = vm * tmp;
   
    lito = dist/12;

    printf("%.3lf\n", lito);
    
return 0;}

// eu coloquei dist como inteiro no começo..... divisão de número inteiro, parabéns meu eu do passado....
