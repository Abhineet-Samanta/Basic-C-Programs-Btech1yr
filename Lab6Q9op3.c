// to print Armstrong numbers from 100 to 999
#include <stdio.h>

int main()
{
    int a, temp1, temp2, temp3, n, m;

    printf("The armstrong numbers are-");
    for (n = 1; n < 10; n++)
    {
        printf("%d ", n);
    }
    for (m = 10; m < 100; m++)
    {
        temp1 = m; // temporary integer to store number value
        temp3 = 0; // sum must be reset to 0 at the start of each iteration

        while (temp1 > 0)
        {
            temp2 = temp1 % 10;
            temp3 = temp3 + (temp2 * temp2);
            temp1 = temp1 / 10;
        }

        if (m == temp3) // if sum obtained == number, print it!
            printf("%d ", m);
    }
    for (a = 100; a < 1000; a++)
    {
        temp1 = a; // temporary integer to store number value
        temp3 = 0; // sum must be reset to 0 at the start of each iteration

        while (temp1 > 0)
        {
            temp2 = temp1 % 10;
            temp3 = temp3 + (temp2 * temp2 * temp2);
            temp1 = temp1 / 10;
        }

        if (a == temp3) // if sum obtained == number, print it!
            printf("%d ", a);
    }

    return 0;
}