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

struct double_linked_list{
    node * head;
    node * tail;
    
    double_linked_list(){
        head = NULL;
        tail = NULL;
    }
    void push_back(int x){
        node * n = new node(x);
        if(tail == NULL){
            head = tail = n;
        }else{
            tail->next = n;
            n->prev = tail;
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

    int a[] = {1,2,3,4,5,6,76,-1,-2,0};
    int len = sizeof(a) / sizeof(int);

    double_linked_list l;
    for(int i = 0; i < len; ++i){
        l.push_back(a[i]);
    }

    l.print();
    l.print_r();

    return 0;
}