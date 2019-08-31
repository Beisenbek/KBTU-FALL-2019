#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
    node * prev;
    node(int x){
        val = x;
        next = NULL;
        prev = NULL;
    }
};

struct dll{
    node * head;
    node * tail;
    dll(){
        head = NULL;
        tail = NULL;
    }
    void push_back(int x){
        if(tail == NULL){
            tail = new node(x);
            head = tail;
        }else{
            tail->next = new node(x);
            tail->next->prev = tail;
            tail = tail->next;
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

    void print_r(){
        node * temp = tail;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main(){
    int a[] = {1,3,4,5,6,7,8,9,-1};
    int len = sizeof(a) / sizeof(int);

    dll x;

    for(int i = 0; i < len; ++i){
        x.push_back(a[i]);
    }

    x.print();
    x.print_r();

    return 0; 
}