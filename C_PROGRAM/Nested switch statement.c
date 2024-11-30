#include <stdio.h>
#include <string.h>
#include <ctype.h>

int len(char str[]) {
    return strlen(str);
}

char* upper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

char* lower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

void reverse(char str[]) {
    int n = strlen(str);
    for (int i = n - 1; i >= 0; i--) {
        putchar(str[i]);
    }
}

int main() {
    int n, num, a, b;
    char str[1000];

    const char *menu = "Main Menu:\n"
                       "1. Arithmetic Calculations\n"
                       "2. Text Processing\n"
                       "3. Exit\n"
                       "Enter your choice: ";
    const char *Amenu = "Arithmetic Menu:\n"
                        "1. Addition\n"
                        "2. Subtraction\n"
                        "3. Multiplication\n"
                        "4. Division\n"
                        "Enter your choice: ";
    const char *Tmenu = "Text Processing Menu:\n"
                        "1. Count Characters\n"
                        "2. Reverse String\n"
                        "3. Convert to Uppercase\n"
                        "4. Convert to Lowercase\n"
                        "Enter your choice: ";

    while (1) {
        printf("%s", menu);
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("%s", Amenu);
                scanf("%d", &num);

                switch (num) {
                    case 1:
                        printf("Enter two numbers: ");
                        scanf("%d %d", &a, &b);
                        printf("Result: %d + %d = %d\n", a, b, a + b);
                        break;
                    case 2:
                        printf("Enter two numbers: ");
                        scanf("%d %d", &a, &b);
                        printf("Result: %d - %d = %d\n", a, b, a - b);
                        break;
                    case 3:
                        printf("Enter two numbers: ");
                        scanf("%d %d", &a, &b);
                        printf("Result: %d * %d = %d\n", a, b, a * b);
                        break;
                    case 4:
                        printf("Enter two numbers: ");
                        scanf("%d %d", &a, &b);
                        if (b == 0) {
                            printf("Error: Division by zero is not allowed.\n");
                        } else {
                            printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
                        }
                        break;
                    default:
                        printf("Invalid choice. Returning to the main menu.\n");
                }
                break;

            case 2:
                printf("%s", Tmenu);
                scanf("%d", &num);
                getchar();  // Clear newline from input buffer

                switch (num) {
                    case 1:
                        printf("Enter a string: ");
                        fgets(str, sizeof(str), stdin);
                        str[strcspn(str, "\n")] = '\0';  // Remove trailing newline
                        printf("Result: The string contains %d characters.\n", len(str));
                        break;
                    case 2:
                        printf("Enter a string: ");
                        fgets(str, sizeof(str), stdin);
                        str[strcspn(str, "\n")] = '\0';  // Remove trailing newline
                        printf("Reversed string: ");
                        reverse(str);
                        printf("\n");
                        break;
                    case 3:
                        printf("Enter a string: ");
                        fgets(str, sizeof(str), stdin);
                        str[strcspn(str, "\n")] = '\0';  // Remove trailing newline
                        printf("Uppercase string: %s\n", upper(str));
                        break;
                    case 4:
                        printf("Enter a string: ");
                        fgets(str, sizeof(str), stdin);
                        str[strcspn(str, "\n")] = '\0';  // Remove trailing newline
                        printf("Lowercase string: %s\n", lower(str));
                        break;
                    default:
                        printf("Invalid choice. Returning to the main menu.\n");
                }
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
