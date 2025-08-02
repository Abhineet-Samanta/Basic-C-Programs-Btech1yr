// to find if the given three digit number s an Armstrong number
#include <stdio.h>

int main()
{
  int a, temp1, temp2, temp3;
  printf("Enter the number between 100 and 999 that you want to check:\n");
  scanf("%d", &a);
  temp1 = a;
  temp3 = 0;
  while (temp1 != 0)
  {
    // temp2 contains the last digit
    temp2 = temp1 % 10;

    temp3 += temp2 * temp2 * temp2;

    // removing last digit from the orignal number temp1
    temp1 /= 10;
  }

  if (temp3 == a)
    printf("%d is an Armstrong number.", a);
  else
    printf("%d is not an Armstrong number.", a);

  return 0;
}
