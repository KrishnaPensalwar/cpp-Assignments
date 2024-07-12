#include <iostream>
#include <list>
#include <queue>
#include <stack>

using namespace std;

struct node{
    node * left;
    int data;
    node *right;

    node(int val){
        data=val;
        left=right=NULL;
    }

};

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void iterative_preorder(node * root){
    vector<int> traversal;
    if(root==NULL){
        return;
    }

    stack<node*> st;
    st.push(root);

    while(!st.empty()){
        root=st.top();
        st.pop();
        cout<<root->data<<" ";
        if(root->right != NULL){
            st.push(root->right);
        }
         if(root->left != NULL){
            st.push(root->left);
        }

    }

}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

void level_order_traversal(node * root){
    if(root==NULL){
        return;
    }
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node * n=q.front();
        q.pop();
        if(n!=NULL){
            cout<<n->data<<" ";
            if(n->left){
                q.push(n->left);
            }
            if(n->right){
                q.push(n->right);
            }
        }
    }
}

int height(node*root){
    if(root==NULL){
        return 0;
    }
    int lh= height(root->left);
    int rh= height(root->right);

    return 1+ max(lh,rh);
}


int main() {

    struct node*root=new node(1);

    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);


    /*
                1
               / \
              2   3
             / \
            4   5
     */

    cout<<"Preorder traversal : ";
    preorder(root);
    cout<<endl;

    cout<<"Iterative Preorder :";
    iterative_preorder(root);
    cout<<endl;

    cout<<"Inorder traversal : ";
    inorder(root);
    cout<<endl;

    cout<<"Postorder traversal : ";
    postorder(root);
    cout<<endl;

    cout<<"Level order traversal : ";
    level_order_traversal(root);
    cout<<endl;

    cout<<"Height of binary tree :"<<height(root);

    




    return 0;
}
