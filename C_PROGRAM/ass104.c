#include <stdio.h>

void amiold(int age){
    if(age < 0){
        printf("Age is not valid, setting age to 0.");
        age = 0;
    }
    else if(age < 13){
        printf("You are young.");
    }
    else if(age >= 13 && age < 18){
        printf("You are a teenager.");
    }
    else
        printf("You are old");
}

int main()
{
    int age;
    int initialage;
    printf("Input your initial age: ");
    scanf("%d", &initialage);
    age = initialage;
    amiold(age);
    int year;
    printf("\nInput year passes: ");
    scanf("%d", &year);
    age = age + year;
    amiold(age);
    return 0;
}