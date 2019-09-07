#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
      /*ListNode(int x){
          this.x = x;
          this.next = NULL;
      }*/
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
             tail = t;
             head = t;
         }else{
             tail->next = t;
             tail = t;
         }
     }
 };

 void printList(ListNode * node, string label){
     cout << label << " ";
     while(node != NULL ){
         cout << node->val;
         node = node->next;
         if(node != NULL){
             cout << "->";
         }
     }
     cout << endl;
 }

class Solution {
public:
        ListNode* reverseList(ListNode* head) {
           return  swap(NULL, head);
        }

        ListNode *swap(ListNode * n1, ListNode * n2){
            if(n1 == NULL && n2 == NULL) return NULL;
            ListNode * n3 = n2->next;
            n2->next = n1;
            if(n3 == NULL) return n2;
            return swap(n2, n3);  
        }
     
};

int main(){

    int a[] = {};
    int len = sizeof(a) / sizeof(int);

    List l;

    for(int i = 0; i < len; ++i){
        l.add(a[i]);
    }

    printList(l.head,"input:");

    Solution s;
    ListNode * newHead = s.reverseList(l.head);

    printList(newHead, "output:");

    return 0;
}