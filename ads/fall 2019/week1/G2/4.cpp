#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
};

int main(){

    node n1;
    n1.val = 5;
    
    node n2;
    n2.val = 6;

    node n3;
    n3.val = -1;
    
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    node * temp = &n1;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}