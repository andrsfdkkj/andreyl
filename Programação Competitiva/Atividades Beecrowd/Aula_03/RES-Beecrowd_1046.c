#include <stdio.h>
int main(){
    
    int a, b, x;
    scanf("%d %d", &a, &b);
    
    if(b - a <= 0){
        
        x = (b + 24) - a;
        
        printf("O JOGO DUROU %d HORA(S)\n", x);
        
    }
    else{ x = b - a; printf("O JOGO DUROU %d HORA(S)\n", x);}
  
return 0;}
