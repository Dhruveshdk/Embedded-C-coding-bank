/* The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, typically starting with 0 and 1.  The sequence begins 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... and continues infinitely.*/

// Fibonacci Series (iterative + recursive)

#include <stdio.h>

// Iterative
void Fibonacci_Iterative(int n) {
    long a = 0, b = 1;

    if (n <= 0) return;

    printf("Iterative : ");

    for (int i = 1; i <= n; i++) {
        printf("%ld ", a);
        long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// Recursive — returns nth Fibonacci number
long Fibonacci_Recursive(int n) {
    if (n == 0) return 0;   // base case 1
    if (n == 1) return 1;   // base case 2
    return Fibonacci_Recursive(n - 1) + Fibonacci_Recursive(n - 2);
}

int main() {
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);

    // Iterative — prints the series directly
    Fibonacci_Iterative(num);

    // Recursive — call in a loop to print the series
    printf("Recursive : ");
    for (int i = 0; i < num; i++) {
        printf("%ld ", Fibonacci_Recursive(i));
    }
    printf("\n");

    return 0;
}