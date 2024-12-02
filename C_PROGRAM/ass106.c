#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char d[50];
    char e[50];
    int n, j = 0, k = 0;
    printf("Input a string: ");
    scanf("%s", s);
    size_t length = strlen(s);
    n = length;
    for(int i = 0; i < n; i++){
        if(i == 0 || i % 2 == 0){
                d [j++] = s[i];
        }

    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 1){
            e[k++] = s[i];
        }
    }
    d [j] = '\0';
    e [k] = '\0';
    printf("%s\n", d);
    printf("%s", e);


    return 0;
}