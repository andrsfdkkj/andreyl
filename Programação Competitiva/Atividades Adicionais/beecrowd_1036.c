#include <stdio.h>
#include <math.h>

 
int main() {
    double a, b, c, delta, bhask1,bhask2;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    delta=(b*b)-4*a*c;
    
    if(delta < 0 || a == 0){
        
        printf("Impossivel calcular\n");
        
    }
    else{
        delta=sqrt(delta);
        
        bhask1=(-b+delta)/(2*a);
        bhask2=(-b-delta)/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",bhask1,bhask2);
    
        
    }
    return 0;
}
