#include <stdio.h>
int main(){
  // sistema de vida, yk = vida
    int yk = 100, cap = 1, aux;
while(yk>0){
    
switch(cap){
    
case 1:
    printf("Choice Emotion\n\n\n   Capitulo 1: IFogo\n\nVoce eh um estudante chamado Yk, que sentiu muito sono durante uma aula no laboratorio\n...\nmas estava com tanto sono que dormiu no meio da aula\n...\nvoce acorda sentindo um cheiro de queimado forte, olha pra tras e ve uma fonte de tensao em chamas!!!\n\n\nOque voce vai fazer?\nPense rapido, logo o fogo vai se espalhar!\n1. Jogar agua\n2. Usar o exintor de incendio\n3. Chamar por ajuda\n4. Tentar sair da sala\n\n");
    
    scanf("%d", &aux);
    if(aux == 3 || aux == 4){printf("Voce corre em direcao a porta\n...\ntenta abrir e ve que esta trancada\nentao decide gritar por ajuda:\n\n'alguem ai pode me ajudar?'\n...\nninguem te respondeu e o fogo ja tomou conta da sala\n\n\ne nao ha nada que voce possa fazer..."); yk = 0;}
    else if(aux != 2){printf("Droga! Oque voce fez?\n"); yk = 0;}
    else if(aux == 2){printf("Voce conteve o fogo, mas a sala ainda esta lotada de fumaca, se ficar mais um segundo aqui, voce com certeza vai passar mal!\n\nVoce olha em direcao a porta...\ne ve um painel...\nolha em direcao a mesa do professor e ve um papelzinho...\n\nOque voce faz?\n1. Ver oque esta escrito no papelzinho\n2. Tentar mexer no painel da porta\n");}
    aux = 0;
    
    scanf("%d", &aux);
    if(aux == 2){printf("Voce vai ate o painel e ve escrito:\n'o codigo esta no papelzinho encima da mesa :)'\n\n"); 
    aux = 1;
    printf("Voce vai ate o papelzinho e le:\n'A senha do painel eh o valor de x de x = 2³+2²'\n");}
    
    else if(aux == 1){printf("Voce vai ate o papelzinho e le:\n'A senha do painel eh o valor de x de x = 2³+2²'\n");}
    else{printf("\n1 ou 2... voce vai morrer pra largar de ser besta!"); yk = 0;}
    
    aux = 0;
    
    
    
    

return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }}
return 0;}
