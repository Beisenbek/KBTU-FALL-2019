#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    if(x % 2 == 0) cout << "even" << endl;
    else cout << "odd" << endl;

    string res = (x % 2 == 0) ? "even" : "odd";
    cout << res;

    return 0;
}