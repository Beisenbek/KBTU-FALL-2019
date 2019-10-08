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
    if(root == NULL) return new node(x);
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

int rightmost(node * root){
    while(root->right != NULL){
        root = root->right;
    }
    return root->val;
}

node * remove(node * root, int val){
    if(root == NULL) return NULL;
    if(root->val == val){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }else if(root->left != NULL && root->right == NULL){
            node * el = root->left;
            delete root;
            return el;
        }else if(root->right != NULL && root->left == NULL){
            node * el = root->right;
            delete root;
            return el;
        }else if(root->right != NULL && root->left != NULL){
            root->val = rightmost(root->left);
            root->left = remove(root->left, val);
            return root;
        }
    }else if(val < root->val){
            root->left = remove(root->left, val);
            return root;
    }else if(val > root->val){
            root->right = remove(root->right, val);
            return root;
    }
}

int main(){
    node * root = NULL;
    int a[] = {2, 3, 54, -1};
    int n = sizeof(a) / sizeof(int);

    for(int i = 0; i < n; ++i){
        root = add(root, a[i]);
    }

    print(root);
    cout << endl;
    remove(root, 54);
    remove(root, -1);
    print(root);

    return 0;
}