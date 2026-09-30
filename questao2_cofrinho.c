#include <stdio.h>
int main(){
 float m,s=0;
 do{
  scanf("%f",&m);
  if(m==.5||m==1||m==2)s+=m;
 }while(m);
 printf("Total: %.2f",s);
 return 0;
}
