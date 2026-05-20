#include <stdio.h>
 
int main() {
    char escravo[10];
    double salario, vendas, merreca;
    
    scanf("%s\n", escravo);
    scanf("%lf\n%lf", &salario, &vendas);
    
    merreca = salario + vendas*0.15;
    
    printf("TOTAL = R$ %.2lf\n", merreca);
    
    return 0;
}



