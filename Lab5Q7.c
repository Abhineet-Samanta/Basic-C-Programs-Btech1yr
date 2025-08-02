// 7.	Write a program to calculate the discount in rupees for the following criterion. (Without Loop)
// Cost price	discount
// >=800	25%
// 500-800	20%
// <500	no discount (0%)

#include <stdio.h>
int main()
{
    float cp, sp;
    printf("Enter the cost price of the article: \n");
    scanf("%f", &cp);
    if (cp < 500)
    {
        printf("There is no discount on this item. \n");
        printf("The Selling price of this article is : Rs. %0.2f \n", cp);
    }
    if (cp < 800 && cp > 500)
    {
        printf("There is 20 percent discount on this item. \n"); // remember not to write 20% as % is an
                                                                 //  operator in C it gives a garbage value
        sp = (cp - (cp * .20));
        printf("The Selling price of this article is : Rs. %0.2f \n", sp);
    }
    if (cp >= 800)
    {
        printf("There is 25 percent discount on this item. \n");
        sp = (cp - (cp * .25));
        printf("The Selling price of this article is : Rs. %0.2f \n", sp);
    }
    return 0;
}