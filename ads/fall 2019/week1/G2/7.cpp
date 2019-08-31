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

struct myqueue{
    private:
        node * head;
        node * tail;
    public:
        myqueue(){
            head = NULL;
            tail = NULL;
        }
        void enqueue(int x){
            node * n = new node(x);
            if(tail == NULL){
                head = tail = n;
            }else{
                tail->next = n;
                n->prev = tail;
                tail = n;
            }
        }
        int dequeue(){
            int res = 0;
            if(head != NULL){
                res = head->val; 
                node * temp = head;
                head = head->next;
                delete temp;
            //temp = NULL;
            }
            return res;
        }
};

int main(){

    int a[] = {1,2,3,4,5,6,76,-1,-2,0};
    int len = sizeof(a) / sizeof(int);

    myqueue q;
    for(int i = 0; i < len; ++i){
        q.enqueue(a[i]);
    }

    cout << q.dequeue() << " ";
    q.enqueue(1000);
    cout << q.dequeue() << " ";

    return 0;
}