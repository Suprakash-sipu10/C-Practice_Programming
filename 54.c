#include <stdio.h>
#include <math.h>
void findRoots(int a, int b, int c) {
    int discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real and different roots: %.2lf and %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("Real and same root: %.2lf\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    int a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    findRoots(a, b, c);
    return 0;
}
