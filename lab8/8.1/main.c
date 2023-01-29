#include <stdio.h>

void main(){
    int n[999]={},result=0,i=1,j=1;
    while(i>-1){
        scanf("%d",&n[i]);
        if(n[i]==-1){
            while(j<i){
                result = result + n[j];
                j++;
            }
            printf("%d",result);
            return;
        }
        i++;
    }
}

