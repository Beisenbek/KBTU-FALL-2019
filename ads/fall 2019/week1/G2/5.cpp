#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
    node(int x){
        val = x;
        next = NULL;
    }
};

struct linked_list{
    node * head;
    node * tail;
    
    linked_list(){
        head = NULL;
        tail = NULL;
    }
    void push_back(int x){
        if(tail == NULL){
            tail = new node(x);
            head = tail;
        }else{
            node * n = new node(x);
            tail->next = n;
            tail = n;
        }
    }
    void print(){
        node * temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    int a[] = {1,2,3,4,5,6,76,-1,-2,0};
    int len = sizeof(a) / sizeof(int);

    linked_list l;
    for(int i = 0; i < len; ++i){
        l.push_back(a[i]);
    }

    l.print();

    return 0;
}