#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
    node * prev;
    node(int x){
        val = x;
        next = prev = NULL;
    }
};

struct dq{
    private:
        bool reversed;
        node * head;
        node * tail;
        void push_back_inner(int x){
            node * n = new node(x);
            if(head == NULL){
                head = tail = n;
            }else{
                tail->next = n;
                n->prev = tail;
                tail = n;
            }
        }
        void push_front_inner(int x){
            node * n = new node(x);
            if(head == NULL){
                head = tail = n;
            }else{
                n->next = head;
                head->prev = n;
                head = n;
            }
        }
        void print_inner_fwd(){
            node * t  = head;
            while(t != NULL){
                cout << t->val << "->";
                t = t->next;
            }
        }
        void print_inner_bwd(){
            node * t  = tail;
            while(t != NULL){
                cout << t->val << "->";
                t = t->prev;
            }
        }

        void back_inner(){
            if(tail != NULL){
                cout << tail->val << endl; 
                node * el = tail;
                tail = tail->prev;
                if(tail == NULL){
                    head = NULL;
                }else{
                    tail->next = NULL;
                }
                delete el;
            }
            else{
                 cout << ";(" << endl; 
            }
        }

        void front_inner(){
            if(head != NULL){
                cout << head->val << endl; 
                node * el = head;
                head = head->next;
                if(head == NULL){
                    tail = NULL;
                }else{
                    head->prev = NULL;
                }
                delete el;
            }else{
                cout << ";(" << endl; 
            }
        }
    public:
        dq(){
            head = tail = NULL;
            reversed = false;
        }

        void push_back(int x){
            if(reversed){
                push_front_inner(x);
            }else{
                push_back_inner(x);
            }
        }

        void push_front(int x){
            if(reversed){
                push_back_inner(x);
            }else{
                push_front_inner(x);
            }
        }

        void front(){
            if(reversed){
                back_inner();
            }else{
                front_inner();
            }
        }

        void back(){
            if(reversed){
                front_inner();
            }else{
                back_inner();
            }
        }

        void reverse(){
            reversed = !reversed;
        }
        void print(){
            cout << "print: ";
            if(reversed){
                print_inner_bwd();
            }else{
                print_inner_fwd();
            }
            cout << endl;
        }
};


int main(){

    dq d;

    int n;
    cin >> n;

    string op;
    int x;

    for(int i = 0; i < n; ++i){
        cin >> op;
        if(op == "push_back"){
            cin >> x;
            d.push_back(x);
        }
        else if(op == "push_front"){
            cin >> x;
            d.push_front(x);
        }
        else if(op == "front"){
            d.front();
        }
        else if(op == "back"){
            d.back();
        }
        else if(op == "reverse"){
            d.reverse();
        }
    }

    return 0;
}