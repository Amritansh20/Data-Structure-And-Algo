#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

void insertAtHead( Node* &head, Node* &tail, int data){
   
   if(head == NULL){
    Node* temp = new Node(data);
    head= temp;
    tail=temp;
   }else{
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head=temp;
   }
   


}

void insertAtTail(Node* &head,Node* &tail, int data){
    if(tail==NULL){
    Node* temp = new Node(data);
    tail= temp; 
    head = temp;
    }
  
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = tail->next;
}

void insertAtPos(int pos,int data, Node* &head, Node* &tail){
    //insert at start
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next; 
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(Node* &head, int pos){
    if(pos==1){
        Node* temp = head;
        temp->next->prev=NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }else{
        int cnt=1;
        Node* curr = head;
        Node* prev = NULL;

        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next = curr->next;
        curr->next =NULL;
        delete curr;

    }
    

}

int getLength(Node* head){
    int len=0;
    Node* temp = head;
        while(temp!=NULL){
        len++;
        temp= temp->next;
    }
    return len;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }cout << endl;
}

int main(){
   
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    insertAtHead(head, tail,12);
    print(head);
    insertAtHead(head,tail,16);
    print(head);
    insertAtTail(head,tail,14);
    print(head);
    insertAtTail(head,tail,15);
    print(head);
    deleteNode(head,4);
    print(head);

}