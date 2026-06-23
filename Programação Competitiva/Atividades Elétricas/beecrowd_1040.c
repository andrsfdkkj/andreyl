#include <stdio.h>
 int main(){
     double a, b, c, d, med, notexam, medf;
     scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
     
     med = ((a*2)+(b*3)+(c*4)+d)/10;
     
     if(med >= 7.0){
        printf("Media: %.1lf\nAluno aprovado.\n", med);
     }
     else if(med < 5){
        printf("Media: %.1lf\nAluno reprovado.\n", med);
     }
     else{
             
        printf("Media: %.1lf\nAluno em exame.\n",med);
        scanf("%lf", &notexam);
        medf = (med + notexam)/2;
        printf("Nota do exame: %.1lf\n", notexam);
        
        
        if(medf >= 5.0){
                
              printf("Aluno aprovado.\n");
     }
        else if(medf <= 4.9){
                
                printf("Aluno reprovado.\n");
                
                
         }
         printf("Media final: %.1lf\n", medf);
     }
     
return 0;
     
 }




//speedrun
