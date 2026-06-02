#include <stdio.h>
int main(){
  // sistema de vida tb, yk = vida, sou foda
    int yk = 100, cap = 1, aux;
    while(yk>0){
    
    switch(cap){
    
    case 1:
    printf("      ==C Nistro==\n\n\n   Capitulo 1: IFogo\n\nVoce eh um estudante chamado Yk, que sentiu muito sono durante uma aula no laboratorio\n...\nmas estava com tanto sono que dormiu no meio da aula\n...\nvoce acorda sentindo um cheiro de queimado forte, olha pra tras e ve uma fonte de tensao em chamas!!!\n\n\nOque voce vai fazer?\nPense rapido o fogo vai se espalhar!\n1. Jogar agua\n2. Usar o exintor de incendio\n3. Chamar por ajuda\n4. Tentar sair da sala\n\n");
    scanf("%d", &aux);
    if(aux == 3 || aux == 4){printf("Voce corre em direcao a porta\n...\ntenta abrir e ve que esta trancada\n...\n'alguem ai pode me qjudar?'\n...\nmas ninguem te respondeu e o fogo katomou conta da sala\n\n\ne nao ha nada que voce possa fazer..."); yk = 0;}
    if(aux != 2){printf("Droga! Oque voce fez?\n"); yk = 0;}
    else{ printf("Voce conteve o fogo, mas a sala ainda esta lotada de fumaca, se fivarmais um segundo aqui, voce com certeza vai passar mal!\n");}
    break;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }}
return 0;}
