// Write a program to find the sum of n terms of the sin series sin(x) = x – (x^3)/3! + (x^5)/5! + (x^7)/7! + ..
// In above sine series, observe the first term, which is x. Which can be written as x1/1!.

// i.e., x = x1/1!;
// Adding 2 to 1 gives you 3. Adding 2 to 3 gives you 5. Adding 2 to 5 gives you 7 and so on ..
// So the sine series becomes:
// sin(x) = x1/1! – x3/3! + x5/5! – x7/7! + x9/9! – x11/11! + x13/13! –

// First term in the series is positive. Second term is negative. Third term is positive.
// Again the forth term is negative. So we can conclude that, first term starts with
// positive and then it’s an alternative between negative and positive.

// Next we need to find factorial of each number which divides x in each series.
//  i.e., 1, 3, 5, 7, 9, 11, 13, 15, 17, 19

#include <stdio.h>
#include <math.h>

int fact(int x)
{
    int f = 1, i;
    // Loop from 1 to N to get the factorial
    for (i = 1; i <= x; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    int m = -1, n, deg, ctr; // here m will act as a variable that will switch between -1 and +1
    float rad;
    float Pi = 3.142;
    printf("ENter the degree: \n");
    scanf("%d", &deg);
    printf("ENter the number of terms of the sine series u need: ");
    scanf("%d", &n);
    rad = (deg * Pi) / 180;
    float sum = rad;
    printf("The sine series for %d degree is: \n", deg);
    printf("%0.2f", rad);       // this prints the first term of the sine series
                                // to print the subsequent terms use the loop
    for (int i = 1; i < n; i++) // Loop to calculate subsequent terms in the series.
    {
        ctr = (2 * i + 1);                 // Calculate the power of 'x' using the given formula.
        float mm = pow(rad, ctr);          // Calculate the value of 'x' raised to the power 'ctr'.
        float nn = ((mm * m) / fact(ctr)); // Multiply 'mm' with 'm'.
        printf(" + %0.2f ", nn);           // Print the calculated term.
        sum = sum + nn;                    // Add the term to the running sum.
        m = m * (-1);                      // Toggle the value of 'm' between -1 and 1.
    }
    printf("\nThe sum of the %d terms of the sine series is %0.2f\n", n, sum); // Print the final sum.
    return 0;
}