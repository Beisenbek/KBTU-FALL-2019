#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
};

int main(){

    int a[] = {1,3,4,5,6,7,8,9,-1};

    int len = sizeof(a) / sizeof(int);

    node tail;
    tail.val = a[len - 1];
    tail.next = NULL;

    node * temp = &tail;

    for(int i = len - 2; i >=0; --i){
        node * n = new node();
        n->val = a[i];
        n->next = temp;
        temp = n; 
    }

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0; 
}