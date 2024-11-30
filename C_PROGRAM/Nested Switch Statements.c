/*
expected output
Main Menu:
1. Arithmetic Calculations
2. Text Processing
3. Exit
Enter your choice: 1

Arithmetic Menu:
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 2

Enter two numbers: 15 8
Result: 15 - 8 = 7

Main Menu:
1. Arithmetic Calculations
2. Text Processing
3. Exit
Enter your choice: 2

Text Processing Menu:
1. Count Characters
2. Reverse String
3. Convert to Uppercase
Enter your choice: 1

Enter a string: Hello World
Result: The string contains 11 characters.

Main Menu:
1. Arithmetic Calculations
2. Text Processing
3. Exit
Enter your choice: 3

Exiting the program. Goodbye!
This demonstrates how nested menus allow users to navigate different options, each performing a specific task.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int len(char str[])
{
    int length = strlen(str);
    return length;
}
char *upper(char str[])
 {
    int i = 0;
    while (str[i] != '\0')
    {
        str[i] = toupper(str[i]); // Convert character to uppercase
        i++;
    }
    return str;
  }

char *lower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]); // Convert character to lowercase
        i++;
    }
    return str;
}



int main()
{
    int n;
    int num;
    int a, b, c;
    char str[1000];
    const char *menu = "Main Menu: "
                       "\n1. Arithmetic Calculations"
                       "\n2. Text processing"
                       "\n3. Exit"
                       "\nEnter your choice: ";
    const char *Amenu = "Arithmetic Menu: "
                        "\n1. Addition"
                        "\n2. Subtraction"
                        "\n3. Multiplication"
                        "\n4. Division"
                        "\nEnter your choice: ";
    const char *Tmenu = "Text Processing Menu:"
                        "\n1. Count Characters"
                        "\n2. Reverse String"
                        "\n3. Convert to Uppercase"
                        "\n4. Convert to Lowercase"
                        "\nEnter your choice:";

    while(1){

         printf("%s", menu);
         scanf("%d", &n);
             switch(n){
                case 1:
                    printf("%s", Amenu);
                    scanf("%d", &num);
                          switch(num){
                                case 1:
                                    printf("Enter two numbers: ");
                                    scanf("%d %d", &a, &b);
                                    int Result = a + b;
                                    printf("Result: %d + %d = %d\n", a, b, Result);
                                break;
                                case 2:
                                     printf("Enter two numbers: ");
                                     scanf("%d %d", &a, &b);
                                     int result = a - b;
                                     printf("Result: %d - %d = %d\n", a, b,result);
                                break;
                                case 3:
                                     printf("Enter two numbers: ");
                                     scanf("%d %d", &a, &b);
                                     int Res = a * b;
                                     printf("Result: %d * %d = %d\n", a, b, Res);
                                break;
                                case 4:
                                     printf("Enter two numbers: ");
                                     scanf("%d %d", &a, &b);
                                     int Re = a / b;
                                     printf("Result: %d / %d = %d\n", a, b, Re);
                                break;

                                default:
                                     printf("Invalid number\n");
                        }
                         break;

            case 2:
                printf("%s", Tmenu);
                scanf("%d", &num);
                   switch(num){
                         case 1:
                               printf("Enter a string: ");
                               while ((c = getchar()) != '\n' && c != EOF); // Clear the input buffer
                               fgets(str, sizeof(str), stdin);
                               str[strcspn(str, "\n")] = '\0';
                               printf("Result: The string contains %d\n", len(str));
                               break;
                         case 2:
                             printf("Enter a string: ");
                             while ((c = getchar()) != '\n' && c != EOF); // Clear the input buffer
                             fgets(str, sizeof(str), stdin);
                             for(int i = len(str); i >= 0; i--){
                                  printf("%c", str[i]);
                                  }
                                   break;
                         case 3:
                               printf("Enter a string: ");
                               while ((c = getchar()) != '\n' && c != EOF); // Clear the input buffer
                               fgets(str, sizeof(str), stdin);
                               printf("%s", upper(str));
                         break;
                         case 4:
                              printf("Enter a string: ");
                              while ((c = getchar()) != '\n' && c != EOF); // Clear the input buffer
                              fgets(str, sizeof(str), stdin);
                              printf("%s", lower(str));
                         break;

                         default:
                              printf("Invalid number\n");
                             }
                         break;

            case 3:
                 printf("Exiting the program. Goodbye!");
            return 0;



           default:
                printf("Invalid number");
              }
           }
    return 0;
}
