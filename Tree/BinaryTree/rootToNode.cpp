#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int data){
            this->data = data;
            this->left=NULL;
            this->right=NULL;
        }
};

node* buildTree(node* root){
    int data;
    cout << "Enter the data " << endl;
    cin >> data;
    root = new node(data);

    if(data == -1)
    return NULL;

    cout << "Inserting the data in left of "<< data <<endl;
    root->left = buildTree(root->left);
    cout << "Inserting the data in right of data "<< data <<endl;
    root->right = buildTree(root->right);
    return root;

}

bool getPath(node* root, vector<int> &ds, int x){
    if(root==NULL)
    return false;
    
    cout << root->data << " "<< endl;
    ds.push_back(root->data);

    if(root->data==x)
    return true;

    bool left = getPath(root->left,ds,x);
    bool right = getPath(root->right,ds,x);

    if(left|| right) return true;
    ds.pop_back();

    return false;
}

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}
int main(){
     node* root = NULL;
     root= buildTree(root);
     vector<int> ds;
     getPath(root,ds,7);
     cout << "The path is: ";
     print(ds);
}