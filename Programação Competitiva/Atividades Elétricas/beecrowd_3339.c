#include <stdio.h>
#include <math.h>
int main(){
    
    int camily, flumi, nense, andro, respota;
    
    scanf("%d", &camily);
    
    for(int i=0;i<camily;i++){
        
        scanf("%d %d", &flumi, &nense); 
        
        flumi = ceil(sqrt(flumi));
        nense = floor(sqrt(nense));
       
            
            respota = nense-flumi+ 1;
        
        
        
        printf("%d\n", respota);
        
        
        
    }
    
    return 0;
}
