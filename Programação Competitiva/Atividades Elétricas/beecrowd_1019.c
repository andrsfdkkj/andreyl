#include <stdio.h>
 
 int main(){
     int n, nh, nm;
     
     scanf("%d", &n);
     
     nh = n/3600;
     n = n % 3600;
     nm = n/60;
     n = n % 60;
     
     printf("%d:%d:%d\n", nh, nm, n);
return 0;}
