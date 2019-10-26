#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main () {

    string s,t;
    cin >> s >> t;

    size_t pos = s.find(t);

    if( pos != string::npos){
        cout << "yes" << endl;
        cout << pos << endl;
        
    }else{
        cout << "no" << endl;
        cout << pos << endl;
    }



    return 0;
}