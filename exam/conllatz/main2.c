#include<stdio.h>
unsigned long collatz_max(unsigned long m,unsigned long n) {
    int max_cyclelength = 0;
    for (unsigned long i = m; i <= n; i++) {    //loop m to n
        unsigned long num = i;
        int cycle_length = 0;
        while (num != 1) {       //conllatz
            if (num % 2 == 0) {
                num = num / 2;
            } else {
                num = 3 * num + 1;
            }
            cycle_length++;
        }
        if (cycle_length > max_cyclelength) {    //find max cycle_length
            max_cyclelength = cycle_length;
        }
    }
    return max_cyclelength+1;
}
int main(){
    unsigned long m,n;
    scanf("%lu %lu", &m,&n);
    unsigned long res = collatz_max(m,n);
    printf("%lu %lu %lu",m,n,res);
}




