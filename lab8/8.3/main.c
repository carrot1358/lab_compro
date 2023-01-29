#include <stdio.h>

void main(){
    int a,b,result1=1,result2=1,total;
    scanf("%d %d",&a,&b);

    //find 3^a
    for(int i = 1; i <= a; i++){
        result1 = result1 *3;
    }

    //find b^3
    for(int i = 1; i <= 3; i++){
        result2 = result2 *b;
    }
    total = result1 + result2;
    printf("%d",total);
}

