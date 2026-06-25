#include <stdio.h>
#include <stdint.h>

void OddEven(uint32_t n) {
    if(n&1){
        printf("Odd");
    }
    else printf("Even");
}

int main() {
    uint32_t n;
    scanf("%u", &n);
    OddEven(n);
    return 0;
}