#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}
