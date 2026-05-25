#include <stdio.h>
 
int main(){
    double flu;
    scanf("%lf", &flu);
    
    if(flu >= 0 && flu <= 25){
        printf("Intervalo [0,25]\n");}
    else if(flu > 25 && flu <= 50){
        printf("Intervalo (25,50]\n");}
    else if(flu > 50 && flu <= 75){
        printf("Intervalo (50,75]\n");}
    else if(flu > 75 && flu <= 100){
        printf("Intervalo (75,100]\n");}
        
    else{printf("Fora de intervalo\n");}
    
return 0;}

flu de fluminense
