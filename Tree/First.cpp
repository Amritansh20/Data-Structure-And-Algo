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

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        if(temp==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
         cout << temp->data << " ";
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
        }

    }
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }


void inorder(node* root){

    // base case
    if(root ==NULL)
    return; 

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

void preorder(node* root){

    // base case
    if(root ==NULL)
    return; 

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){

    // base case
    if(root ==NULL)
    return; 

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
     node* root = NULL;
    // buildFromLevelOrder(root);
    // levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

//  creating the tree
     root= buildTree(root);

    //levelOrderTraversal
    // cout << "levelOrderTraversal is " << endl;
    // levelOrderTraversal(root);

    //inorder-> Left Node Right
    cout << "Inorder traversal is ";
    postorder(root);
    cout << endl;

    //preorder -> Node Left Right
    // cout << "preorder traversal is ";
    // preorder(root);
    // cout << endl;

    
    // postorder -> Left Right Node
    // cout << "postorder traversal is ";
    // postorder(root);
    // cout << endl; 

    return 0;
}