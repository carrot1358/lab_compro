#include <stdio.h>

void main(){
    int n,i,total;
    scanf("%d",&n);
    while(i <= n){
        total = total + i;
        i++;
    }
    printf("%d",total);

}

