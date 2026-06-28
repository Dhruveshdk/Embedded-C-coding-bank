#include<stdio.h>

void Swap(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    Swap(&n1, &n2);
    printf("n1: %d and n2: %d", n1, n2);
    return 0;
}