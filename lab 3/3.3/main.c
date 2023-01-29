#include <stdio.h>
int a,b;
void main() {
    scanf("%d %d", &a, &b);
    if (b < a) {
        if (a + b == 9 || a - b == 9) {
            printf("Good number");
        } else {
            printf("normal number");
        }
    } else if (a < b) {
        if (a + b == 9 || b - a == 9) {
            printf("Good number");
        } else {
            printf("normal number");
        }

    }
}
