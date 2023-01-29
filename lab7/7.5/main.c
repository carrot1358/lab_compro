#include <stdio.h>

void main(){
    int n,result=1,i=1;
    scanf("%d",&n);
    while(i <=n){
        result = result * i;
        i++;
    }
    printf("%d",result);
}

