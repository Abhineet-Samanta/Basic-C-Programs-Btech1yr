// Write a program to find the factorial of a number using a function.
//(Ex: 5! =5*4*3*2*1. Use a function Fact to evaluate factorial & print the result
int fact(int n)
{
    int p = 1;
    for (int i = n; i > 0; i--)
    {
        p = i * p;
    }
    return p;
}
int main()
{
    int x;
    printf("Enter the number you want to find factorial of: %d \n", x);
    scanf("%d", &x);
    int factorial = fact(x);
    printf("The factorial of the number %d is : %d \n", x, factorial);
    return 0;
}