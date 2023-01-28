#include <stdio.h>

int main() {
    int m, n;
    int carry = 0;
    int carry_count = 0;
    int old_carry = 0;
    scanf("%9d%9d", &m, &n);
    if(m==0 && n==0){
        return 0;
    }
    while (m != 0 || n != 0) {
        old_carry = carry;
        carry = 0;
        /*printf("%d %% 10 + %d %% 10 + %d \n",m,n,carry);
        printf("%d + %d  + %d = ",m%10,n%10,carry);*/
        carry = (m % 10 + n % 10 + old_carry)/10;
        /*printf("%d\n\n",carry);*/

        if (carry)
            carry_count++;
        m /= 10;
        n /= 10;
    }

    if (carry_count == 0)
        printf("No carry operation.\n");
    else
        printf("%d carry operation.\n", carry_count);

    main();

    return 0;
}