#include <iostream>
#include <vector>

using namespace std;

string int2str(int n){
    string res= "";
    res += char(n + 48);
    return res;
}

string f(int n){
    if(n < 7) return int2str(n);
    return  f(n / 7) + int2str(n % 7);
}

int main(){

    int n;
    cin >> n;
    cout << f(n);

    return 0;
}