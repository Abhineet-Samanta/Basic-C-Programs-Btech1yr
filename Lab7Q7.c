// WAP to print all prime numbers within the given range
// function check whether a number is prime or not
#include <stdio.h>
#include <stdbool.h> // stdbool.h is the standard library to use bool in c
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

// Function to print primes
void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            printf("%d ", i);
}

// Driver Code
int main()
{
    int end;
    printf("Enter the end of the series: ");
    scanf("%d", &end);
    printPrime(end);
}