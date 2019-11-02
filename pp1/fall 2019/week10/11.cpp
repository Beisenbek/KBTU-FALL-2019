#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;
    string str;
    cin >> str;
    ss << str << endl;
    cin >> str;
    ss << str;

    string str2;
    ss >> str2;
    ss >> str2;

    cout << str2;

    return 0;
}