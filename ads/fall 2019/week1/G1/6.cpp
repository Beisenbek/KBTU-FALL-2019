#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
};

int main(){

    int a[] = {1,3,4,5,6,7,8,9,-1};

    int len = sizeof(a) / sizeof(int);

    node n[len];

    for(int i = 0; i < len - 1; ++i){
        n[i].val = a[i];
        n[i].next = &n[i+1]; 
    }

    n[len-1].val = a[len-1];
    n[len-1].next = NULL;

    node * item = &n[0];

    while(item != NULL){
        cout << item->val << " ";
        item = item->next;
    }

    return 0; 
}