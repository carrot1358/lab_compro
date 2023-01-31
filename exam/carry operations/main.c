#include <stdio.h>

int main() {
    int m, n;
    int carry = 0;
    int carry_count = 0;
    int old_carry = 0;
    scanf("%9d %9d", &m, &n);
    if(m==0 && n==0){
        return 0;
    }
    while (m != 0 || n != 0) {
        carry = 0;
        carry = (m % 10 + n % 10 + old_carry)/10;
        if (carry)
            carry_count++;
        m /= 10;
        n /= 10;
        old_carry = carry;
    }

    if (carry_count == 0)
        printf("No carry operation.\n");
    else if(carry_count == 1){
        printf("%d carry operation.\n",carry_count);
    }
    else
        printf("%d carry operations.\n", carry_count);

    main();
}