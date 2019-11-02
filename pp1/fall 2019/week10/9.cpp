#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;
    string str;
    cin >> str;
    ss << str << endl;
    ss << str << endl;
    ss << str << endl;

    cout << ss << endl;

    return 0;
}