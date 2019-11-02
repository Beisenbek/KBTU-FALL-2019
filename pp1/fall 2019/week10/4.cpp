#include <iostream>

using namespace std;

int main(){

    string str("hello world!");
    string str2 = str.insert(1,"test");

    cout << str << endl;
    cout << str2 << endl;

    return 0;
}