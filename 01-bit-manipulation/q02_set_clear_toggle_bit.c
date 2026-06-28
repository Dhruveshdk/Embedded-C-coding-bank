// Set, clear, and toggle the Nth bit of a number
#include <stdio.h>

int SetFifthBit(int n) {
    n = n | (1<<5);
    return n;
}

int ClearFifthBit(int n) {
    n = n & ~(1<<5);
    return n;
}

int toggleFifthBit(int n) {
    n = n ^ (1<<5);
    return n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", SetFifthBit(n));
    printf("%d", ClearFifthBit(n));
    printf("%d", toggleFifthBit(n));
    return 0;
}