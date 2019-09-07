#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    /*
    ListNode(int x){
        val = x;
        next = NULL;
    }*/
    ListNode(int x) : val(x), next(NULL) {}
};

struct List{
    ListNode * head;
    ListNode * tail;
    List(){
        head = NULL;
        tail = NULL;
    }
    void add(int x){
        ListNode * t = new ListNode(x);
        if(tail == NULL){
            head = tail = t;
        }else{
            tail->next = t;
            tail = t;
        }
    }
    
};

void print(ListNode * t){
        while(t != NULL){
            cout << t->val;
            t = t->next;
            if(t != NULL){
                cout << "->";
            }
        }
}

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            return swap(NULL, head);
        }
        
        ListNode* swap(ListNode * n1, ListNode * n2){
            if(n1 == NULL && n2 == NULL) return NULL;
            ListNode * n3 = n2->next;
            n2->next = n1;
            if(n3 == NULL) return n2;
            return swap(n2, n3);
        }
};


int main(){

    int test1[] = {};
    int len = sizeof(test1) / sizeof(int);

    List l;
    for(int i = 0; i < len; ++i){
        l.add(test1[i]);
    }

    cout << "input: ";
    print(l.head);
    cout << endl;

    Solution s;
    ListNode *head2 = s.reverseList(l.head);

    cout << "output: ";
    print(head2);
    cout << endl;

    return 0;
}