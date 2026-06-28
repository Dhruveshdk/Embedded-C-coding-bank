#include<stdio.h>

/* A prime number is a natural number greater than 1 that has exactly two distinct factors: 1 and itself.  This means it is divisible only by 1 and the number itself without leaving a remainder. */

/*A number is prime if it's divisible only by 1 and itself.
So to check if n is prime, the naive idea is:
"Try dividing n by every number from 2 to n-1. If none divide evenly → prime."*/
#include <stdio.h>
#include <math.h>    // for sqrt()

int isPrime_Iterative(int n) {
    if (n <= 1) return 0;           // 0 and 1 are not prime
    if (n == 2) return 1;           // 2 is the only even prime
    if (n % 2 == 0) return 0;       // all other even numbers → not prime

    // Check odd divisors from 3 up to √n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;   // found a factor → not prime
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime_Iterative(num))
        printf("Iterative : %d is Prime\n", num);
    else
        printf("Iterative : %d is NOT Prime\n", num);

    return 0;
}