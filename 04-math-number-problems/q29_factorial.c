// Factorial (iterative + recursive)

#include <stdio.h>

long Factorial_Iterative(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        for (int i = n - 1; i >= 1; i--) {
            n = n * i;
        }
        return n;
    }
}

long Factorial_Recursive(int n) {
    // Base case — MUST have this to stop the recursion
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case — calls ITSELF with a smaller value
    return n * Factorial_Recursive(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);   // %d for int, not %ld

    printf("Iterative : %ld\n", Factorial_Iterative(num));
    printf("Recursive : %ld\n", Factorial_Recursive(num));
    return 0;
}