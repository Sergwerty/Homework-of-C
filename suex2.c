#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

int main() {
    struct Complex c1, c2, sum, product;

    printf("Enter first complex number (real imaginary): ");
    scanf("%lf %lf", &c1.real, &c1.imag);

    printf("Enter second complex number (real imaginary): ");
    scanf("%lf %lf", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    product.real = c1.real * c2.real - c1.imag * c2.imag;
    product.imag = c1.real * c2.imag + c1.imag * c2.real;

    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Product: %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}

