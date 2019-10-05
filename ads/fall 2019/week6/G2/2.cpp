#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;


int main(){

    deque<int> d;
    d.push_front(1);
    d.push_back(2);

    reverse(d.begin(), d.end());

    cout << d.front() << endl;
 

    return 0;
}