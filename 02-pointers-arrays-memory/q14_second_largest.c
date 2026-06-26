#include<stdio.h>
#include<limits.h>

// Very imp Note:
/* 
Whenever you encounter a number:
    If it is greater than Max
        SecondMax = Max
        Max = arr[i]
    Otherwise, if it is greater than SecondMax but less than Max
        Update SecondMax 
*/

int Secondlargest(int arr[], int n) {
    int Max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            secondMax = Max;
            Max = arr[i];
        }
        else if(arr[i]>secondMax && arr[i]<Max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main(){
    int A[] = {1,54,32,92,17,0};
    int size = sizeof(A)/sizeof(A[0]);
    printf("%d\n", Secondlargest(A,size));
    return 0;
}

