#include <stdio.h>

void main(){
    int n[999]={},result=0,total=0,i=1;
    while(i>-1){
        scanf("%d",&n[i]);
        if(n[i]==-1){
            printf("%d",total);
            break;
        }
        if(n[i]%2==0){
            total = total + n[i];
        }
        i++;
    }
}

