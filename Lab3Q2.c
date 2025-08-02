//Write a program to find the sum of the digits of a 
//four-digit number (ex. 1234 sum=10) (using a loop).
#include<stdio.h>
int main(){
int num,temp,remainder,sum=0;
printf("Enter the number: \n");
scanf("%d",&num);
temp=num;
while (num>0){
remainder=num%10;
sum=sum+remainder;
num=num/10;
}
printf("The sum of the digits of the given number %d is %d :", temp,sum);
    return 0;
}