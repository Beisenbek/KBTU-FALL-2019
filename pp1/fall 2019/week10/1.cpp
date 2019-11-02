#include <iostream>

using namespace std;

int main(){

    string str = "123";

    for(int i = 1; i <= str.size(); ++i){
        cout << str.substr(0, i) << endl;
    }

    return 0;
}