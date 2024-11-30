#include <stdio.h>
enum day
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
int main()
{
    enum day weekend1;

    enum day weekend2;

    weekend1 = saturday;
    weekend2 = sunday;
    printf("%d", weekend1);
    printf("\n%d", weekend2);
    return 0;
}
/*
the syntax for enum is
enum size
{
    small,
    medium,
    large,
    extralarge,
};
*/
