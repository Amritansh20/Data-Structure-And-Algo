#include<iostream>
using namespace std;

// One pass Algorithm -> Jisme input ek baar hi read ho.
class Node{
    public: 
    int data; 
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data <<" ";
        temp= temp->next; 
    }cout << endl;
}

void insertAtEnd(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = tail->next;
}

int main(){
    Node* node1 =  new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtEnd(tail,2);
    insertAtEnd(tail,3);
    insertAtEnd(tail,4);
    insertAtEnd(tail,5);
    insertAtEnd(tail,6);
    print(head);
}