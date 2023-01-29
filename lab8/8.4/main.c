#include <stdio.h>

void main(){
    int n,i=1,j=1,temp=0,total=0;
    scanf("%d",&n);
    while(i<=n){
        //make i^i
        temp = i;
        while(j<i){
            temp = temp * i;
            j++;
        }//end i^i
        
        total= total + temp;
        j=1,temp=0;
        i++;
    }
    printf("%d ",total);
}

