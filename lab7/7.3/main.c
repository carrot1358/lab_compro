#include <stdio.h>

void main(){
    int n,i=1,total=1;
    scanf("%d",&n);
    while(i <= n){
        total = total *10;
        i++;
    }
    printf("%d",total);

}

