#include <stdio.h>
 
int main() {
    int dist;
    double consm, combs;
    
    scanf("%d\n", &dist);
    scanf("%lf", &combs);
    
    consm = dist/combs;
    
    printf("%.3lf km/l\n", consm);
    
    return 0;}
