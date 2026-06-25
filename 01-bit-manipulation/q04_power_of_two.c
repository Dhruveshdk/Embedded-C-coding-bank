#include <stdio.h>
#include <stdint.h>

const char* is_power_of_two(uint32_t n) {
    if(n==0){
        return "NO";
    }else{
        if(n & (n-1)){
            return "NO";
        }
        else{
            return "YES";
        }
    }

}

int main() {
    uint32_t n;
    scanf("%u", &n);

    const char* result = is_power_of_two(n);
    printf("%s", result);
    return 0;
}