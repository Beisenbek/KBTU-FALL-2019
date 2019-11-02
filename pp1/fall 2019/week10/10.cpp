#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    stringstream ss;
    string str;
    cin >> str;
    ss << str;

    cout << "point1" << ss.str() << endl;
    ss.flush();
    cout << "point2" << ss.str() << endl;



    return 0;
}