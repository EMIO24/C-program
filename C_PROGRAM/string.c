#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Get string input from the user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Compare lengths
    if (strlen(str1) > strlen(str2)) {
        printf("Larger string: %s\n", str1);
    } else if (strlen(str1) < strlen(str2)) {
        printf("Larger string: %s\n", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }

    return 0;
}
