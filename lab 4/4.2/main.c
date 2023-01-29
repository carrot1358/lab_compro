#include <stdio.h>
#include <math.h>
float a,b,c,x1,x2;
void main() {
    scanf("%f %f %f",&a,&b,&c);
    x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);

    printf("%.0f\n",x1);
    printf("%.0f",x2);


}
