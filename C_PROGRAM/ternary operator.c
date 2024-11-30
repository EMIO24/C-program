#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 ? printf("You are eligible to vote") : printf("You are not eligible to vote");
    return 0;
}
/* syntax for ternary operator is
test condition ? expression 1 : expression 2;
the test condition is a boolean expression that
is either true or false.
if true the first expression will be executed
if false the second expression will be executed
*/
/* a ternary operator can also be used to store
a variable.
*/
