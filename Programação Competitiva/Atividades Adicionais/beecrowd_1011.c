#include <stdio.h>
 
int main() {
    double pi , raiu, vol, andrey; 
    
    scanf("%lf", &raiu);
    
    pi  = 3.14159;
    andrey = raiu * raiu * raiu;
    vol = (4.0/3) * pi * andrey;
 
    printf("VOLUME = %.3lf\n", vol);
 
return 0;}
