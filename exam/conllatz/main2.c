#include<stdio.h>
unsigned long collatz_max(unsigned long m,unsigned long n) {
    int max_count = 0;
    for (unsigned long i = m; i <= n; i++) {    //loop m to n
        unsigned long num = i;
        int count = 0;
        while (num != 1) {       //conllatz
            if (num % 2 == 0) {
                num = num / 2;
            } else {
                num = 3 * num + 1;
            }
            count++;
        }
        if (count > max_count) {    //find max count
            max_count = count;
        }
    }
    return max_count+1;
}
int main(){     //main
    unsigned long m,n;
    scanf("%lu %lu", &m,&n);
    unsigned long res = collatz_max(m,n);
    printf("%lu %lu %lu",m,n,res);
}




