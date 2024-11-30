/* the syntax for the FOR loop is
for (initialization expression; test expression; update expression)
{
    // code inside the loop
}
*/
#include <stdio.h>

int main()
{
    int sum;
    for (int i = 0; i <= 100; i++){
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}
