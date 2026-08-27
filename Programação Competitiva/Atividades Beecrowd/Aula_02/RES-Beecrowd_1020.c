#include <stdio.h>
 
int main() {
    int diandreys, mes, anos;
    
    scanf("%d", &diandreys);
    
    anos = diandreys/365;
    diandreys = diandreys % 365;
    mes = diandreys/30;
    diandreys = diandreys % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, mes, diandreys);
 
    return 0;}
