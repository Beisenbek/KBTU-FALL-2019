#include <iostream>

using namespace std;

int main(){

    string str("hello world!");
    size_t pos = str.find("o");

    if(pos != string::npos){
        cout << "found!";
    }else{
        cout << "not found!";
    }

    return 0;
}