#include <stdio.h>
int a,b;
void main(){
    scanf("%d %d",&a,&b);
    if(a%2==0 && b%2==0){
        printf("Double even");
    }
    else if(a%2==0 || b%2==0){
        printf("Not double even");
    }

}
