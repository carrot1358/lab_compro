#include <stdio.h>

void main(){
    int n;
    int lastresult;
    int cerrentresult=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++) {
        lastresult = cerrentresult;
        cerrentresult = lastresult + i;
    }
    printf("%d",cerrentresult);
}

