#include <stdio.h>

int main()
{
    double salary;
    printf("Enter salary: ");
    scanf("%lf", &salary);
    double* ptr = &salary;
    printf("pointer is %p", ptr);
    double** dptr = &ptr;
    printf("\nsalary is %lf", salary);
    double newsalary = salary * 2;
    printf("\nNew salary is %lf", newsalary);
    printf("\nDouble pointer is %p", dptr);
    printf("\nSalary address is %p", &salary);
    return 0;
}

/*
int number;
int* ptr;


ptr = number  //Invalid
*ptr = number: // Invalid
ptr = &number: // Valid
*ptr = number:  //Valid

#include <stdio.h>

int main()
{
    double salary;
    printf("Enter salary: ");
    scanf("%lf", &salary);

    double* ptr = &salary;
    printf("Pointer is %p", (void*)ptr);  // Print pointer address directly

    double** dptr = &ptr;  // dptr should be a pointer to ptr
    printf("\nsalary is %lf", salary);

    double newsalary = salary * 2;
    printf("\nNew salary is %lf", newsalary);

    printf("\nDouble pointer is %p", (void*)*dptr);  // Dereference dptr to get ptr's value (i.e., &salary)
    printf("\nSalary address is %p", (void*)&salary);

    return 0;
}

*/
