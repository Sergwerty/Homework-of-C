#include <stdio.h>
#include <math.h>

int main() {
    double num;

    printf("Enter a floating-point number: ");
    scanf("%lf", &num);

    printf("Square root: %.4f\n", sqrt(num));
    printf("Rounded value: %.0f\n", round(num));
    printf("Sine (radians): %.4f\n", sin(num));

    return 0;
}

