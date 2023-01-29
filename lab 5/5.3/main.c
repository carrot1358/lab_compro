#include <stdio.h>

void main(){
    int a;
    int b;
    int lastresult;
    int cerrentresult=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++) {
        lastresult= cerrentresult;
        cerrentresult = lastresult + i;
    }
    printf("%d",cerrentresult);
}

