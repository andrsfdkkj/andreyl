#include <stdio.h>
int main(){
    char uone[50], tio[50], tri[50];
    scanf("%c %c %c", &uone, &tio, &tri);
    
    if(uone == 'vertebrado'){
        
        if(tio == 'ave'){
            if(tri == 'carnivoro'){
                printf("aguia\n");
            }
            else if(tri == 'onivoro'){
                printf("pomba\n");
              
            }
        }
        else if(tio == 'mamifero'){
            
            if(tri == 'onivoro'){
                printf("homem\n");
            }
            else if(tri == 'herbivoro'){
                printf("vaca\n");
              
            }
                }
            
        }
        
        
        
        
    
    
    
    
    
    
    
    
    if(uone == 'invertebrado'){
        
        if(tio == 'inseto'){
            if(tri == 'hematogafo'){
                printf("pulga\n");
            }
            else if(tri == 'herbivoro'){
                printf("lagarta\n");
              
            } 
                
                
                
        }
        if(tio == 'anelideo'){
            if(tri == 'hematogafo'){
                printf("sanguessuga\n");
            }
            else if(tri == 'onivoro'){
                printf("minhoca\n");
              
            }     
                
                
        }    
            
            
            
        }
        

    
    
    
    
    
    
 
    
 
return 0;}
