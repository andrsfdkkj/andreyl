#include <stdio.h>
 
int main() {
 int eu, tu, nos, vos, eles;
 
  scanf("%d%d%d%d",&eu,&tu,&nos,&vos);
  
  eles = (eu*tu - nos*vos);
  
  printf("DIFERENCA = %d\n",eles);
  
 
    return 0;
}
