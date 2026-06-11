#include <stdio.h>
int main(){
int l, c, wf;
scanf("%d\n%d", &l, &c);
if((l + c) % 2 == 0){
    wf = 1;
    printf("%d\n", wf);}
else{wf = 0; printf("%d\n", wf);}
return 0;}
