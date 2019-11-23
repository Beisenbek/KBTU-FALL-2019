#include <iostream>

using namespace std;

int f2(int x){
    if(x == 0) return 0;
    return x % 10 + f2(x / 10);
}

bool f(int x){
    int k = x % 10;
    if(f2(x) % k == 0) return true;
    return false;
}

int main(){

    int x;
    cin >> x;

    if(f(x)){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}