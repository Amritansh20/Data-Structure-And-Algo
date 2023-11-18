#include<iostream>
using namespace std;

class Stack{

    public:

    //properties
    int top;
    int size;
    int *arr;

    //behaviour
    Stack(int size){
        this->size =size;
        top=-1;
        arr = new int[size];
    }

    void push(int x){
        if(size-top>1){
            top++;
            arr[top] = x;
        }else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout << "Stack Underflow" << endl;
        }
    }

    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }else{
            cout << "Stack empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Stack st(5);
    st.push(43);
    st.push(22);
    st.push(44);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl ;
    cout << st.isEmpty();
}