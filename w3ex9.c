#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Input total number of elements(1 to 100): ");
    scanf("%d", &n);

    float *arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    float largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The Largest element is : %.2f\n", largest);

    free(arr);
    return 0;
}

