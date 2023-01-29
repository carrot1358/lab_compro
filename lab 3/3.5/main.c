#include <stdio.h>
int a,b;
void main(){
    scanf("%d %d",&a,&b);
    if(a+b >=13 && a+b <=19) {
        printf("Teen age");
    }
    else printf("%d",a+b);


}
