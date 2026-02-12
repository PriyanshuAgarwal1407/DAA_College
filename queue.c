#include<stdio.h>
#define MAX 7

int queue[MAX];
int front = 0;
int rear = 0;

void enqueue(int x) {
    if(rear == MAX - 1) {
        printf("Queue is FULL!\n");
        return;
    }
    if(front == 0) {
        front = 1;
    }
    rear++;
    queue[rear] = x;
    printf("Enqueued: %d\n", x);
}

void dequeue() {
    if(front == 0 || front > rear) {
        printf("Queue is EMPTY!\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    front++;
    if(front > rear) {
        front = 0;
        rear = 0;
    }
}

void display() {
    if(front == 0 || front > rear) {
        printf("Queue is EMPTY!\n");
        return;
    }
    printf("Queue elements: ");
    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    
    display();
    
    dequeue();
    dequeue();
    
    display();
    
    return 0;
}
