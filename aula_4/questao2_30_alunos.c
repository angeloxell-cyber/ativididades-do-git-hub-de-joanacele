#include <stdio.h>
int main(){
 char n[30][30];float m[30];
 for(int i=0;i<30;i++)scanf("%s%f",n[i],&m[i]);
 for(int i=0;i<30;i++)printf("%s %.2f\n",n[i],m[i]);
 return 0;
}
