#include <stdio.h>
typedef struct complex{
    double real;
    double imagine;
} complex;
int main()
{
    complex c1 = {.real = 34, .imagine = 90};
    complex c2 = {.real = 87, .imagine = 32};
    complex sum;

        sum.real = c2.real - c1.real;
        sum.imagine = c1.imagine - c2.imagine;
    printf("difference in between the two complex number is %.2lf - %.2lfi", sum.real, sum.imagine);
    return 0;
}
/*
#include <stdio.h> // Includes the standard input/output library for using printf and other functions

// Defines a structure to represent a complex number with two real parts (real and real1)
// and an imaginary part (imagine)
typedef struct complex {
    double real;    // Real part of the complex number
    double imagine; // Imaginary part of the complex number
} complex;

int main() {
    // Initializes two complex numbers c1 and c2 with specific values
    // Only the fields 'real' and 'imagine' are provided; 'real1' will default to zero
    complex c1 = {.real = 34, .imagine = 90}; // First complex number with real part 34 and imaginary part 90
    complex c2 = {.real = 87, .imagine = 32}; // Second complex number with real part 87 and imaginary part 32

    // Declares a complex structure 'sum' to store the difference between c1 and c2
    complex sum;

    // Calculates the difference between c1 and c2 for the real and imaginary parts
    sum.real = c2.real - c1.real;           // Difference in real parts: 87 - 34
    sum.imagine = c1.imagine - c2.imagine;  // Difference in imaginary parts: 90 - 32

    // Prints the result of the differences between the real and imaginary parts
    // %.2lf formats the output to show two decimal places for floating-point numbers
    printf("difference in between the two complex number is %.2lf - %.2lfi", sum.real, sum.imagine);

    return 0; // Indicates that the program ended successfully
}
*/
