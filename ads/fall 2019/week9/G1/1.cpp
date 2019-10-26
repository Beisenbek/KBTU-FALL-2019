#include <iostream>

using namespace std;

struct node{
    int val;
    int cnt;
    node * left;
    node * right;
    node(int x){
        cnt = 1;
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
    }else if(root->val == x){
        root->cnt++;
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

int getCnt(node * root, int val){
    node * res = find(root, val);
    if(res != NULL){
        return res->cnt;
    }
    return 0;
}

node * remove(node * root, int x){

}

node * find(node * root, int x){
    if(root == NULL) return NULL;
    if(root->val == x) return root;
    if(root->val > x) return find(root->left, x);
    if(root->val < x) return find(root->right, x);
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