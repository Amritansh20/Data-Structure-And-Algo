#include<iostream>
using namespace std;


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

void oddEvenList(Node* &head){
    Node* odd = head;
    Node* even = head->next;
    Node* connect = head->next;

    while(odd->next!=NULL && odd->next->next!=NULL){
        odd->next = odd->next->next;
        odd= odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = connect;
}

int main(){
    Node* node1 = new Node(2);
    Node* head= node1;
    Node* tail= node1;
    insertAtEnd(tail,1);
    insertAtEnd(tail,3);
    insertAtEnd(tail,5);
    insertAtEnd(tail,6);
    insertAtEnd(tail,4);
    insertAtEnd(tail,7);
    print(head);
    oddEvenList(head);
    print(head);


}