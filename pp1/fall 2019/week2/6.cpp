#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    if(x % 2 == 0){
        cout << "2" << endl;
    }else if(x % 3 == 0){
        cout << "3" << endl;
    }else {
        cout << "no" << endl;
    }

    return 0;
}