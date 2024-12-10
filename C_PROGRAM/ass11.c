#include <stdio.h>
#define Row 6
#define Col 6
int main()
{
    int count = 0;
    int add = 0;
    int sum[count];
    int array[Row][Col];
    printf("Input the 2D array element: ");
    for(int i = 0; i < Row; i++){
        for(int j = 0; j < Col; j++){
            scanf("%d", &array[i][j]);
        }
    }
    printf("The hour glasses in the 2D array");
    // Loop through valid starting positions for hourglasses
    for (int i = 0; i <= 3; i++) {       // Rows (0 to 3)
        for (int j = 0; j <= 3; j++) {   // Columns (0 to 3)
            // Extract hourglass elements
            int a = array[i][j], b = array[i][j + 1], c = array[i][j + 2];
            int d = array[i + 1][j + 1];
            int e = array[i + 2][j], f = array[i + 2][j + 1], g = array[i + 2][j + 2];
            count +=1;
            int add = a+b+c+d+e+f+g;
            sum[i] = add;

            // Print the hourglass
            printf("Hourglass starting at (%d, %d):\n", i, j);
            printf("%d %d %d\n  %d\n%d %d %d\n\n", a, b, c, d, e, f, g);

        }
    }
    for(int i = 0; i < count -1; i++){
        if(add < sum[i]){
                add = sum[i];
        }
    }
    printf("%d", add);

    return 0;
}