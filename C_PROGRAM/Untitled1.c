#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int j = 0, sum = 0;
    double e = 0, sum1 = 0;
    char t[50];
    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf", &j, &e);

    getchar();
    fgets(t, sizeof(t), stdin);
    size_t len = strlen(t);
    if (len > 0 && t[len - 1] == '\n') {
        t[len - 1] = '\0';
    }
    // Print the sum of both integer variables on a new line.
    sum = i + j;
    printf("%d\n", sum);

    // Print the sum of the double variables on a new line.
    sum1 = d + e;
    printf("%.1lf\n", sum1);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    strcat(s, t);
    printf("%s\n", s);

    return 0;
}
