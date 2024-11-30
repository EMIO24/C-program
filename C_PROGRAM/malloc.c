int main() {

    int n = 4; // Defines the number of integers to be stored
    int* ptr; // Declares a pointer to an integer

    // Allocates memory dynamically for 'n' integers (4 integers in this case)
    // 'malloc' allocates n * sizeof(int) bytes, where sizeof(int) is the size of an integer
    // (int*) casts the returned void pointer from malloc to an integer pointer
    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter input values:\n");

    // Loops through each allocated memory slot to get user input
    // The loop iterates from 0 to n-1, which is 4 times in this case
    for (int i = 0; i < n; ++i) {
        scanf("%d", ptr + i); // Takes input and stores it at the (ptr + i) location
    }

    printf("Input Values:\n");

    // Loops through each memory location to print the stored values
    // '*(ptr + i)' accesses the value stored at the location (ptr + i)
    for (int i = 0; i < n; ++i) {
        printf("%d\n", *(ptr + i)); // Prints each value stored in the allocated memory
    }
    free(ptr);

    return 0; // Ends the program
}
