// Write a program to calculate a bill for internet browsing.
// The conditions are given below:
// Minimum Rs. 200 for up to 100 calls.
// Plus, Rs. 0.60 per call for the next 50 calls.
// Plus, Rs. 0.50 per call for the next 50 calls.
// Plus, Rs. 0.40 pe call for any call beyond 200 calls

#include <stdio.h>
int main()
{

    int b;
    printf("Enter the number of calls done during the month: \n");
    scanf("%d", &b);
    while (b > 0)
    {
        if (b <= 100)
        {
            printf("The bill for the month is : Rs. 200");
            break;
        }
        else if (b > 10 && b <= 150)
        {
            float temp = 200 + ((b - 100) * 0.60); // remember to declare temp as float else it will round off to an integer
            printf("The bill for the month is : %0.2f \n", temp);
            break;
        }
        else if (b > 150 && b <= 200)
        {
            float temp = 200 + (50 * 0.60) + ((b - 150) * 0.50);
            // float temp1=(50*0.60)+((b-150)*0.50);
            // printf("%0.2f",temp1);
            printf("The bill for the month is : %0.2f \n", temp);
            break;
        }
        else if (b > 200)
        {
            float temp = 200 + (50 * 0.60) + (50 * 0.50) + ((b - 200) * 0.40);
            printf("The bill for the month is : %0.2f \n", temp);
            break;
        }
    }
    return 0;
}
