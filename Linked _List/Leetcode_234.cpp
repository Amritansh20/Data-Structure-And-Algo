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

int main(){
    
}