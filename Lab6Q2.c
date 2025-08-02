// Fibonacci Series without Recurssion
#include <stdio.h>
int main()
{
  int a = 0, b = 1, sum, n;
  printf("Enter the number of terms needed in the Fibonacci Series \n");
  scanf("%d", &n);
  printf("The required FIbonnaci series is: \n");
  printf("%d  %d", a, b);
  for (int i = 1; i <= n; i++)
  {

    sum = a + b;
    printf("  %d", sum);
    a = b;
    b = sum;
  }
  return 0;
}