#include <stdio.h>

void main(){
    int a,b,i,total;
    scanf("%d %d",&a,&b);
    i = a;
    while(i <= b){
        total = total + i;
        i++;
    }
    printf("%d",total);

}

