#include <stdio.h>
#include <math.h>

int main() {
    double xum, yd, xd, yum, final, auxum, auxdois, auxtres;
    
    scanf("%lf%lf\n", &xum , &yum);
    scanf("%lf%lf", &xd ,&yd);
    
    auxum = (xd - xum) * (xd - xum);
    auxdois = (yd - yum) * (yd - yum);
    auxtres = auxum + auxdois;
    
    final = sqrt(auxtres);
    
    printf("%.4lf\n", final);
    
    return 0;}
