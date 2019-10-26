#include <iostream>
#include <stdlib.h>

using namespace std;


int main () {

    string s;
    
    getline(cin, s);

    int x = atoi(s.c_str());

    cout << x * x << endl;   


    return 0;
}