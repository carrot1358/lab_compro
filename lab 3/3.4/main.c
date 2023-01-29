#include <stdio.h>
int a,b,c;
void main(){
    scanf("%d %d %d",&a,&b,&c);
   //what operation do a and b equal c
   if(a-b==c){
       printf("-");
   }
   else if(a+b==c){
       printf("+");
   }
   else if(a*b==c){
       printf("x");
   }

}
