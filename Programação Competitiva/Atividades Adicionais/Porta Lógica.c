#include <stdio.h>
int main(){
    int aux, a, b, c, d;
    printf("PORTAS LOGICAS:\n\n\n");
    printf("Escolha entre:\n1 para PORTA E(AND)\n2 para PORTA OU(OR)\n3 para PORTA OU EXCLUSIVO(XOR)\n4 para PORTA INVERSORA(NOT)\n");
    scanf("%d", &aux);
    switch (aux){
        case 1:
        printf("Voce escolheu a PORTA E(AND)\ndigite duas entradas\n");
        scanf("%d %d", &a, &b);
        c = a * b;
        printf("A saida eh: %d\n", c);
        break;
        
        default:
            printf("Escolha entre 1 e 4!\n");
            break;
        }
    return 0;}
