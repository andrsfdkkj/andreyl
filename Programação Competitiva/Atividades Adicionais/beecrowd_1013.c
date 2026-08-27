essa eu penei muito pra entender oque era esse abs

#include <stdio.h>
 
int main() {
    int a, b, c, mab, mac;
 
    scanf("%d%d%d", &a, &b, &c);
 
    mab = (a + b + abs(a - b))/2;
    
    mac = (mab + c + abs(mab-c))/2;
    
    printf("%d eh o maior\n", mac);
 
 return 0;}
