#include <stdio.h>
float weight,height;
void main() {
    scanf("%f %f", &weight, &height);
    float hINmeter = height/100;
    float BMI = weight/(hINmeter * hINmeter);
    if (BMI < 18.5) {
        printf("Underweight");
    }
    else if (BMI >= 18.5 && BMI < 25) {
        printf("Normal");
    }
    else if (BMI >= 25 && BMI < 30) {
        printf("Overweight");
    }
    else {
        printf("Obese");
    }

}
