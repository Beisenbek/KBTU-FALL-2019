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
        root->right = add(root->right, x);
    }else if(root->val > x){
        root->left = add(root->left, x);
    }
    return root;
}

node * find(node * root, int x){
    if(root == NUL
    
    L) return NULL;



    if(root->val == x) return root;
    if(root->val > x) return find(root->left, x);
    return find(root->right, x);
}

void print(node * root){
    if(root != NULL){
        print(root->left);
        cout << root->val << " ";
        print(root->right);
    }
}

int main(){

    node * root = NULL;

    int a[] = {1, 2, -1, 5, -2, 0};

    int n = sizeof(a) / sizeof(int);

    for(int i = 0; i < n; ++i){
        root = add(root, a[i]);
    }

    print(root);

    int b[] = {1, 20, 3, 5, 0};

    int m = sizeof(b) / sizeof(int);

    cout << endl;
    
    for(int i = 0; i < m; ++i){
        if(find(root, b[i]) == NULL){
            cout << "not found: " << b[i] << endl;
        }else{
            cout << "found: " << b[i] << endl;
        }
    }

    return 0;
}