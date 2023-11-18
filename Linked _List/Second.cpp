#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtMid(Node* &head,int position, int data){
    Node *temp = head;
    int count =1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    Node* nodeToInsert =  new Node(data);
    nodeToInsert->next = temp -> next;
    temp->next = nodeToInsert;  
}

void insertAtEnd(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void deleteNode(Node* &head, int position){
    
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count <position){
         prev =  curr;
         curr = curr->next;
         count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtEnd(tail,14);
    print(head);
    insertAtMid(head,3,15);
    print(head);
    deleteNode(head, 2);
    print(head);
}