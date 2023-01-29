#include <stdio.h>

void main(){
    int n;
    int lastresult;
    int cerrentresult=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+i) {
        lastresult= cerrentresult;
        cerrentresult = lastresult + i*i;
    }
    printf("%d",cerrentresult);
}

