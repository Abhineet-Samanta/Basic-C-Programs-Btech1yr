#include <stdio.h>
int fibonacci1(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n > 1)
        return (fibonacci1(n - 2) + fibonacci1(n - 1));
}
int main()
{
    int num;
    printf("Enter the number of elements of the fibonacci series needed: \n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        printf(" %d", fibonacci1(i));
    }
    return 0;
}