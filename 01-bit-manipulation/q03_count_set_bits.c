// Count the number of set bits (Hamming weight)
#include <stdio.h>

int countSetBits(unsigned int n) {
    unsigned int cnt;
    while(n){
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", countSetBits(n));
    return 0;
}