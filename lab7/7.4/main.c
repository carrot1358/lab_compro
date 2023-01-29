#include <stdio.h>

void main(){
    int a,b,result1=1,result2=1,i=1,j=1;
    scanf("%d %d",&a,&b);
    //find 3^a
    while(i <= a){
        result1 = result1 * 3;
        i++;

    }
    //find 5^b
    while(j <= b){
        result2 = result2 * 5;
        j++;

    }
    printf("%d",result1+result2);

}

