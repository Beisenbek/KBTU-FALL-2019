#include <iostream>

using namespace std;

struct node{
    int val;
    node * next;
};

int main(){

    int a[] = {1,3,4,5,6,7,8,9,-1};

    int len = sizeof(a) / sizeof(int);

    node n[len];

    for(int i = 0; i < len; ++i){
        n[i].val = a[i];
    }

    for(int i = 0; i < len; ++i){
        cout << n[i].val << " ";
    }

    return 0; 
}