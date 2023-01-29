#include <stdio.h>

void main(){
    int n;
    int cerrentresult=2;
    scanf("%d",&n);
    for(int i=1;i<n;++i) {
        cerrentresult = cerrentresult * 2;
    }
    printf("result : %d",cerrentresult);
}

