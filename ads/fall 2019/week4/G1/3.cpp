#include <iostream>

using namespace std;


struct node{
    int val;
    node * left;
    node * right;
    node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

node * add(node * root, int x){
    if(root == NULL) return new node(x);
    if(root->val < x){
        if(root->right == NULL){
            root->right = new node(x);
            return root;
        }else{
            add(root->right, x);
        }
    }else if(root->val > x){
        if(root->left == NULL){
            root->left = new node(x);
            return root;
        }else{
            add(root->left, x);
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

node * remove(node * root, int x){

}

bool find(node * root, int x){

}

int main(){

    int a[] = {1, 22, 3, 14, 15, 6, 4};
    int len = sizeof(a) / sizeof(int);
    node * root = NULL;

    for(int i = 0; i < len; ++i){
        root = add(root, a[i]);
    }

    print(root);

    return 0;
}