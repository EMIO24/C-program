#include <stdio.h>

int main()
{
    int count = 1;
    int num;
    printf("Enter how many times you want the loop to run: ");
    scanf("%d", &num);
    while (count <= num)  // Loop until count exceeds num
    {
        printf("This is a while loop\n");
        printf("count = %d\n", count);
        count++;
    }
    printf("");
    return 0;
}
/* while loop syntax
while (condition) if the condition is true the statement
inside the while loop will be executed, till it is false.
{
    // statement inside while loop
}
*/
