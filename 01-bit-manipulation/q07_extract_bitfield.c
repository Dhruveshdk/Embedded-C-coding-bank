#include <stdio.h>
#include <stdint.h>

uint32_t extract_field(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    uint32_t mask;
    uint32_t out;
    mask = (1<<len) - 1;
    mask = (mask<<pos);
    out = mask & reg;
    out = out>>pos;
    return out;
    
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", extract_field(reg, pos, len));
    return 0;
}