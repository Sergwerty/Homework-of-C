#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\nSimple Calculator\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

