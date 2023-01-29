#include <stdio.h>

void main(){
    int n;
    int lastresult;
    int cerrentresult=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        lastresult= cerrentresult;
        cerrentresult = lastresult * i;
    }
    printf("%d",cerrentresult);
}

