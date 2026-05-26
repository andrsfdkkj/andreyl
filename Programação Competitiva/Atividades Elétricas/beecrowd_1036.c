#include <stdio.h>
#include <math.h> 
int main() {
    double a, b, c, x, xd, xb, xx, divivi, bagui;
    
    scanf("%lf%lf%lf", &a, &b, &c);
    
    xb = b*b;
    
    xd = xb - 4 * a * c;
    
    bagui = sqrt(xd);
    
    divivi = 2*a;
    
    x = (-b+bagui)/divivi;
    
    xx = (-b-bagui)/divivi;
    
    if(divivi == 0){printf("Impossivel calcular\n");}
    else if(bagui < 0){printf("Impossivel calcular\n");}
    else{printf("R1 = %.5lf\nR2 = %.5lf\n", x, xx);}
 
    return 0;}


// deu erro no beecrowd! mas deu certo no compilador, então o problema é o beecrowd claramente e nao esse meu codigo horroroso
