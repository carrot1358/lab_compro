#include <stdio.h>

void main(){
    int n,a,b;
    int cerrentresult=10;
    scanf("%d %d",&a,&b);
    n=a+b;
    for(int i=1;i<n;++i) {
        cerrentresult = cerrentresult * 10;
    }
    printf("result : %d",cerrentresult);
}

