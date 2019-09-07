#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    bool res = (x % 2 == 0 && x % 3 == 0); 

    if(res){
        cout << "2 and 3" << endl;
    }else {
        cout << "no" << endl;
    }

    return 0;
}