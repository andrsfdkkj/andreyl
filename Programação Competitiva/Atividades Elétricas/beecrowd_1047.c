#include <stdio.h>
int main(){
        
    int hi, mi, hf, mf, tth, ttm;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

   
    tth = hf - hi;
    ttm = mf - mi;

    if (ttm < 0) 
    {
        ttm = 60 + ttm;
        tth--;
    }

    if (tth < 0) 
    {
        tth = 24 + tth;
    }

    if (hi == hf && mi == mf) 
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } 
    else 
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tth, ttm);
    }

return 0;}



//MUITO  DIFICIL, sacrifiquei meus estudos pra prova de fisica mas pelo menos o becrowd aceitou.

