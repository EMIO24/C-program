/* the syntax for array is
data_type arrayname [array size] = {array content}
*/
#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter the marks of the subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
   int sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];

   printf("\nThe sum of the 5 subjects is %d", sum);

   double avg = sum / 5;

   printf("\nThe average marks of the 5 subject is %lf", avg);
    return 0;
}
