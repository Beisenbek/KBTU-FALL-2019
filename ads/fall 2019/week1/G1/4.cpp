#include <iostream>

using namespace std;

struct node{
    int val;
};

int main(){

    node * n1 = new node();
    n1->val = 5;

    cout << n1->val << endl;

    return 0; 
}