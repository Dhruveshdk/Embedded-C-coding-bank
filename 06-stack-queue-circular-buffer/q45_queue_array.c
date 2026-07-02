// Implement a Queue using an Array (enqueue, dequeue, full/empty check) - Non-Circular Queue


/*
Concept: 
-> enqueue from front, dequqe from rear. 
-> initially both front and rear = -1.
-> Empty: front = rear = -1.
-> Full: rear = size-1.
-> Check isEmpty before enqueue
-> Check isFull before dequeue
-> ENQUEUE: Check isFull - can't add, then isEmpty - front ko 0 pe lao, and rear++ karke Queue[rear] pe add.
-> DEQUEUE: Check isEmpty - nothing, then Queue[front] ko print kr ke, then if front = rear, that means only one element, so front and rear ko -1 bhej de, and else har bar bas front++. 
*/
#include<stdio.h>

#define SIZE 5

int Queue[SIZE];
int front = -1, rear = -1;


int isEmpty(){
    return front == -1;   // Empty - front = rear = -1 // But rear automatically goes to -1 when we dequeue last element, no its okay to check front, since both are glued together only.
}

int isFull(){
    return rear == SIZE-1;
}

void enqueue(int value){
    if(isFull()){
        printf("Queue is Full\n");
        return;
    }
    if(isEmpty())
        front = 0;
    Queue[++rear] = value;
}

void dequeue(){
    if(isEmpty()){
        printf("Queue is Empty\n");
    }
    else{
        printf("Dequeued: %d\n", Queue[front]);
        if(front == rear){  // only one element
            front = rear = -1;
        }
        else{
            front++;
        }
    }
}
void display(){
    if(isEmpty()) printf("Queue is Empty\n");
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ", Queue[i]);
        }
        printf("\n");
    }
}
int main() {
    enqueue(1);
    enqueue(2);
    display();
    enqueue(3);
    display();
    dequeue();
    display();
    dequeue(); // front is now 2, but only 1 element left in queue
    display();
    enqueue(4);
    display();
    enqueue(5);
    enqueue(6);   // will say "Full" even though slots 0,1 are unused!
    display();
    return 0;
}