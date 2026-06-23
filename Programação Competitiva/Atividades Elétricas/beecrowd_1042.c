#include <stdio.h>
int main(){
    int a,b,c, x, y, z;
    scanf("%d %d %d", &a, &b, &c);
    
    x = a; y = b; z = c;
    
    if(a > b){
        int r = a;
        a = b;
        b = r;}

    if(a > c){
        int r = a;
        a = c;
        c = r;}
  
    if(b > c){
       int r = b;
       b = c;
       c = r;}
        
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", a, b, c, x, y, z);
 
 return 0;}
