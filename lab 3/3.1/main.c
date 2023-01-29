#include <stdio.h>
int a,b,c;
void main(){
    scanf("%d %d %d",&a,&b,&c);
    int result = a+b+c;
    if(result%5==0) {
        printf("Divide by 5");
    }
    else("Not divide by 5");
}
