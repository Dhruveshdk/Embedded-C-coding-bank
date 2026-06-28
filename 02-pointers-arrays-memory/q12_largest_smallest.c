#include<stdio.h>

int smallest(int arr[], int n) {
    int Min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<Min){
            Min = arr[i];
        }
    }
    return Min;
}

int largest(int arr[], int n) {
    int Max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            Max = arr[i];
        }
    }
    return Max;
}

int main(){
    int A[] = {1,54,32,92,17,0};
    int size = sizeof(A)/sizeof(A[0]);
    printf("%d\n", largest(A,size));
    printf("%d", smallest(A,size));
    return 0;
}

