#include <stdio.h>
int* fun(int* mul1, int* mul2, int* tot)
{
    *tot = *mul1 * *mul2;
    return tot;
}
int main()
{
    int num1, num2;
    int total;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int* result =fun(&num1, &num2, &total);
    printf("%d", *result);
    return 0;
}
/*
Take note
Returning a wrong type in fun: The fun function has a return type of int* (a pointer to an integer) but is returning *tot, which is an int, not an int*. You should return tot instead of *tot if you want to return the pointer to total.

Incorrect printf statement: In printf("%d", &result);, you are printing the address of result (using &result) instead of its value (the integer it points to). To print the integer value of total, you should use *result instead.

Format specifier mismatch: In printf("%d", ...), using %d for printing an address or pointer can lead to undefined behavior. If you want to print an integer, ensure you're passing an integer, not a pointer.

Corrected Code
Here is the corrected version:

c
Copy code
#include <stdio.h>

int* fun(int* mul1, int* mul2, int* tot)
{
    *tot = *mul1 * *mul2;
    return tot;  // Return the pointer to total, not the value of *tot
}

int main()
{
    int num1 = 13, num2 = 9;
    int total;
    int* result = fun(&num1, &num2, &total);
    printf("%d", *result);  // Dereference result to get the integer value
    return 0;
}
Explanation of Changes
return tot; in fun to return a pointer to total.
printf("%d", *result); in main to print the integer value stored in total.
*/
