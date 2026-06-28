#include <stdio.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t val) {
    // Your logic here
    uint8_t reverse_val;
    for(int i=0;i<8;i++){
        reverse_val = reverse_val<<1;
        reverse_val =  reverse_val | (val & 1);
        val = val>>1;
    }
    return reverse_val;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint8_t result = reverse_bits(val);
    printf("%u", result);
    return 0;
}