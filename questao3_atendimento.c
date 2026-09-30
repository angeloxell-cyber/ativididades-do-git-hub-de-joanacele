#include <stdio.h>
int main(){
 float n,s=0;
 for(int i=0;i<10;i++){scanf("%f",&n);s+=n;}
 s/=10;
 printf("Media: %.2f\n",s);
 if(s<7)printf("Alerta");
 return 0;
}
