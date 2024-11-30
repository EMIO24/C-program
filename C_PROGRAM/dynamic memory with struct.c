/*
Dynamic Memory with Structs:
Create a dynamic array of complex numbers using malloc and calculate their sum.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double real;      // Real part of the complex number
    double imaginary; // Imaginary part of the complex number
} Complex;

int main() {
    int n; // Number of complex numbers
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);

    // Allocate memory for an array of 'n' Complex numbers
    Complex *array = (Complex *)malloc(n * sizeof(Complex));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input complex numbers
    for (int i = 0; i < n; i++) {
        printf("Enter the real and imaginary parts of complex number %d: ", i + 1);
        scanf("%lf %lf", &array[i].real, &array[i].imaginary);
    }

    // Calculate the sum of all complex numbers
    Complex sum = {0.0, 0.0}; // Initialize the sum to 0 + 0i
    for (int i = 0; i < n; i++) {
        sum.real += array[i].real;
        sum.imaginary += array[i].imaginary;
    }

    // Print the result
    printf("Sum of complex numbers: %.2lf + %.2lfi\n", sum.real, sum.imaginary);

    // Free the allocated memory
    free(array);

    return 0;
}

