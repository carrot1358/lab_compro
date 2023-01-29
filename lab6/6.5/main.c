#include <stdio.h>

void main(){
    int a,b;
    int result1,result2;
    scanf("%d %d",&a,&b);
    //find a^b
    result1=a;
    for(int i=1;i<b;i++){
        result1= result1 * a;
    }
    //find 2^b
    result2=2;
    for(int i=1;i<b;i++){
        result2= result2 * 2;
    }
    printf("total : %d",result1+result2+5);
}

