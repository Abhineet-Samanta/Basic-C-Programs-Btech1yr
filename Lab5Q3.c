// Write a program to program to input the number of week’s days (1-7) and
// translate to its equivalent name of the day of the week (e.g., 1 to Sunday, 2 to Monday)

#include <stdio.h>
int main()
{
    int a;
    printf("Enter thr week day in numneric between 1 to 7: \n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("The day is Monday");
        break;
    case 2:
        printf("The day is Tuesday");
        break;
    case 3:
        printf("The day is Wednesday");
        break;
    case 4:
        printf("The day is Thursday");
        break;
    case 5:
        printf("The day is Friday");
        break;
    case 6:
        printf("The day is Saturday");
        break;
    case 7:
        printf("The day is Sunday");
        break;
    default:
        printf("You have not entered a valid number. Try Again.");
        break;
    }
    return 0;
}