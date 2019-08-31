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

    n1.next = &n2;

    cout << n1.next->val << endl;

    return 0; 
}