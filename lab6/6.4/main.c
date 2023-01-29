#include <stdio.h>

void main(){
    int a,b;
    int cerrentresult;
    scanf("%d %d",&a,&b);
    cerrentresult=a;
    for(int i=1;i<b;++i) {
        cerrentresult = cerrentresult * a;
    }
    printf("result : %d",cerrentresult);
}

