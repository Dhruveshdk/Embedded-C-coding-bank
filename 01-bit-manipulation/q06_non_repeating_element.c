#include <stdio.h>
#include <stdlib.h>


int main() {
    int A[] = {1,4,4,7,7,3,1}; // 3 is only Non-repeating
    int result = 0;
    int size = sizeof(A) / sizeof(A[0]);
    for(int i=0; i<size;i++){
        result = result ^ A[i];
    }
    printf("%d", result);
    return 0;
}