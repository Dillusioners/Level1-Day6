/*
Author - Debag101
Purpose - SuperB program on word "plus". Program takes a number input and prints its corresponding fibonacci term, i.e fib(n-1) plus fib(n-2)
Date - 30-04-2023
(NOTE) - Memoization was not possible to implement at this level of code in C.
*/

#include <stdio.h>

// Giving context to user
void display()
{
    printf("########################\n");
    printf("   FIBONACCI SEQUENCE    \n");
    printf("########################\n");
    printf("Welcome to fibonacci sequence where the nth term is always the n-1th term PLUS the n-2th term \n");
}

// Heart of the code
int fibonacci(int num)
{
    if (num == 0)
        return 0; // If num is 0 we return 0 to call stack
    else if (num == 1)
        return 1; // For 1 it is 1
    else
        return fibonacci(num - 1) + fibonacci(num - 2); // For anything else its fib(n-1) "PLUS" fib(n-2)
}

int main(int argc, char const *argv[])
{
    int n; // Nth term holder

    display(); // Displaying context

    while (1) // Checking if number given will be too slow of an implementation
    {
        printf(">> Which Fibonacci term do you want to know : \n");
        scanf("%d", &n);

        if (n < 0)
            n *= -1; // Turning negative terms to +ve
        else if (n > 47)
            printf("(-) Implementation too slow for that number!\n"); // 47 is the threshold
        else
            break; // Else we move on
    }
    // Ending code
    printf("The %dth term of the series  is : %d", n, fibonacci(n));
    return 0;
}