// Implement Stack using an array (push, pop, peek, overflow check)
// Insertion and Deletion can happen only from one end - called top

#include<stdio.h>
#define SIZE 5

int push(int data, int *A, int size, int top){
    if(top==size-1){
        printf("Stack is Full, OverFlow condition\n");
        return top;
    }
    top++;
    A[top] = data;
    return top;
}

int pop(int *A, int top){
    if(top==-1){
        printf("Stack is Empty\n");
        return -1;
    }
    printf("Popped: %d\n", A[top]);
    return top-1;  
}

int peek(int *A, int top){
    if(top==-1){
        printf("Stack is Empty\n");
        return -1;
    }
    return A[top];
}
void display(int *A, int top){
    for(int i=top;i>=0;i--){
        printf("%d\n", A[i]);
    }
}
int main(){
    int A[SIZE];
    int top = -1;

    top = push(3, A, SIZE, top);
    top = push(4, A, SIZE, top);
    top = push(13, A, SIZE, top);
    top = push(6, A, SIZE, top);
    top = push(10, A, SIZE, top);
    top = push(12, A, SIZE, top);   // triggers overflow message

    display(A, top);

    top = pop(A, top);
    display(A, top);

    return 0;
}