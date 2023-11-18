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

int main(){
    Node* node1 = new Node(-1);
    Node* head = node1;
    Node* tail =node1;

    insertAtEnd(tail,5);
    insertAtEnd(tail,3);
    insertAtEnd(tail,4);
    insertAtEnd(tail,0);
    print(head);

    Node* temp = head;
    int cnt=0;

    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }

    int j=0;
    while(j<cnt){
        
        Node* prev = head, *ahead = head->next;
        while(ahead!=NULL){
            
            if(prev->data > ahead->data){
                int n = prev->data;
                prev->data= ahead->data;
                ahead->data= n;
                prev = prev->next;
                ahead= ahead->next;
            }else{
                ahead = ahead->next;
            }
        }
        
        j++;
    }

    print(head);
}