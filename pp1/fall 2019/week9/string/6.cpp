#include <iostream>

using namespace std;

int str2int(string s){
    int d = 1;
    int sum = 0;

    for(int i = s.size() - 1; i >= 0; --i){
        sum += d * (int(s[i]) - 48);
        d *= 10;
    }

    return sum;
}

int main () {

    string s;
    getline(cin, s);

    cout << str2int(s);
    

    return 0;
}