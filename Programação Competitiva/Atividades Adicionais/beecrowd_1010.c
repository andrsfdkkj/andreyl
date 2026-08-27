#include <stdio.h>
 
int main() {
    int cdpcum, nmpcum, cdpcdois, nmpcdois;
    double vlpcum, vlpcdois, valor;
    
    scanf("%d%d%lf\n", &cdpcum, &nmpcum, &vlpcum);
    scanf("%d%d%lf", &cdpcdois, &nmpcdois, &vlpcdois);

    valor = (nmpcum * vlpcum) + (nmpcdois * vlpcdois);
 
    printf("VALOR A PAGAR: R$ %.2lf\n", valor);
 
    return 0;
}

