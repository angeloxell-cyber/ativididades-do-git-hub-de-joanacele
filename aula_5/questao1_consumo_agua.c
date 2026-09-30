#include <stdio.h>
int main(){
 float n,s=0;
 for(int i=0;i<5;i++){
  scanf("%f",&n);s+=n;
  printf(n<=20?"Dentro da media\n":"Acima da media\n");
 }
 printf("Media: %.2f",s/5);
 return 0;
}
