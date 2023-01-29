#include <stdio.h>
int ticket,discount,price=1200;
float total;
void main() {
    scanf("%d",&ticket);
    if (ticket <5) {
        discount = 0;
    }
    else if(ticket >= 5 && ticket < 10) {
        discount = 0;
    }
    else{
        discount = 10;
    }
    total = (price*ticket) - (price*ticket*discount/100);

    printf("get discount = %d%%\ntotal purchase = %.2f",discount,total);
    if(total >= 5000) {
        printf("free 2 T-shirts")
    }
    else if (total >10000) {
        printf("free Movie ticker")
    }
}
