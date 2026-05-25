#include <stdio.h>
 
int main() {
    
    double A, B, C, pi, raioqdobzin, azin, bzin, czin, dzin, ezin;
    
    scanf("%lf%lf%lf", &A, &B, &C);
    
    azin = (A * C)/2;
    
    pi = 3.14159;
    raioqdobzin = C * C;
    bzin = pi * raioqdobzin;
    
    czin = ((A + B) * C)/2;
    
    dzin = B * B;
    
    ezin = A * B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", azin, bzin, czin, dzin, ezin);
return 0;}
