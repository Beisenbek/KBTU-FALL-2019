#include <iostream>

using namespace std;

struct node{
    int val;
    node * left;
    node * right;
    node (int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

node * add(node * root, int x){
    if(root == NULL) new node(x);
    if(x < root->val){
        if(root->left == NULL){
            root->left = new node(x);
        }else{
            root->left = add(root->left, x);
        }
    }else  if(x > root->val){
        if(root->right == NULL){
            root->right = new node(x);
        }else{
            root->right = add(root->right, x);
        }
    }
    return root;
}

void print(node * root){
    if(root != NULL){
        print(root->left);
        cout << root->val << " ";
        print(root->right);
    }
}


int main(){
    node * root;
    int a[] = {2, 3, 4, 7, -1, 5};
    int n = sizeof(a) / sizeof(int);

    for(int i = 0; i < n; ++i){
        root = add(root, a[i]);
    }

    print(root);

    return 0;
}