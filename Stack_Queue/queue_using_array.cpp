#include<iostream>
using namespace std;

class Queue{
    int front,rear;
    int *arr;
    int size;

   public:
    Queue(int size){
        front =0;
        rear= 0;
        arr = new int[size];
    }

    void enqueue(int data){
        if(rear == size-1){
            cout << "Queue is full";
        }else{
            arr[rear]= data;
            rear++;
        }
    }

    int deque(){
        if(front==rear){
            cout << "Queue is empty";
            return -1;
        }else{
            int n = arr[front];
            front++;
            if(front == rear){
                front =0;
                rear =0;
            }
            return n;
        }
    }
};

int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.deque();
}