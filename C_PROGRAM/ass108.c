#include <stdio.h>
#include <string.h>
#define MAX 100

 typedef struct {
    char name[100];
    char number[100];
    }qphonebook;

void queryy(qphonebook phonebook[], int n, char query[100]){
    int found = 0;
    for(int i = 0; i < n; i++){
        if (strcmp(query, phonebook[i].name) == 0){
            printf("%s=%s\n", phonebook[i].name, phonebook[i].number);
            found = 1;
            break;
        }

    }
    if(!found){
            printf("Not found\n");
        }
}

int main()
{
    int n;
    printf("Input the number of entries: ");
    scanf("%d", &n);

    qphonebook phonebook[MAX];

    printf("Input the name and number of phone book entries use space to separate them: ");

    for(int i = 0; i < n; i++){
        scanf("%s %s", phonebook[i].name, phonebook[i].number);
    }

    printf("Input the names to query: ");

    char query[MAX][100];
    int d = 0;
    for(d = 0; d < n; d++){
        scanf("%s",query[d]);
    }
    for(int i = 0; i < d; i++){
        queryy(phonebook, n, query[i]);
    }

    return 0;
}
