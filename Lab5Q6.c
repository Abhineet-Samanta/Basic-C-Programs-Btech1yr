// Program to calculate the amount of an electricity bill for the following criteria. (Without a Loop)
// Units	charge per unit (Rs.)
// Write First, 1-100 up to	0
// Next, 101-200 up to	1.5
// Next, 201-400 up to	2.5
// 401 onwards	3.5

#include <stdio.h>

int main()
{

    int units;
    printf("Enter the number of units consumed: \n");
    scanf("%d", &units);
    if (units <= 100)
    {
        int temp = 0;
        printf("The electricity bill is : %d", temp);
    }
    else if (units <= 200)
    {
        int temp = ((units - 100) * 1.5);
        printf("The electricity bill is : %d", temp);
    }
    else if (units <= 400)
    {
        int temp = ((100 * 1.5) +
                    ((units - 200) * 2.5));
        printf("The electricity bill is : %d", temp);
    }
    else if (units > 400)
    {
        int temp = ((100 * 1.5) +
                    (200 * 2.5) +
                    (units - 400) * 3.5);
        printf("The electricity bill is : %d", temp);
    }

    return 0;
}