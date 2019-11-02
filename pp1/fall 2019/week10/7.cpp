#include <iostream>
#include <sstream>

using namespace std;

int main(){

    stringstream ss;
    string str;
    cin >> str;

    ss << str << '\n';
    ss << str << endl;
    ss << str << endl;

    cout << ss.str() << endl;

    return 0;
}