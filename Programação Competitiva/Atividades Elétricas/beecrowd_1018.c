#include <stdio.h>
 
int main() {
    int x;
    double num, ndois, ncinc, ndez, nvin, ncinq, ncem;
    
    scanf("%d", &x);
    
    ncem = x/100;
    x = x % 100;
    
    ncinq = x/50;
    x = x % 50;
    
    nvin = x/20;
    x = x % 20;
    
    ndez = x/10;
    x = x % 10;
    
    ncinc = x/5;
    x = x % 5;
    
    ndois = x/2;
    x = x % 2;
    
    num = x;
    
    printf("%d\n%lf nota(s) de R$ 100,00\n%lf nota(s) de R$ 50,00\n%lf nota(s) de R$ 20,00\n%lf nota(s) de R$ 10,00\n%lf nota(s) de R$ 5,00\n%lf nota(s) de R$ 2,00\n%lf nota(s) de R$ 1,00\n", x, ncem, ncinq, nvin, ndez, ncinc, ndois, num);
    return 0;}
