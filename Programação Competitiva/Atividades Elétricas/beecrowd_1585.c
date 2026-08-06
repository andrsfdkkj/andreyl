#include <stdio.h>
int main(){
    int N, x, y, area;
    
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        
        scanf("%d%d", &x, &y);

        area = (x * y) / 2;

        printf("%d cm2\n", area);}

    return 0;
}
//achei esse dificil, tou enferrujado
