#include <iostream>

using namespace std;

int main(){

    for(int i = 0; i < 3; ++i){
        cout << "ok" << endl;
    }

    for(int i = 0; i < 3; i++){
        cout << "ok2" << endl;
    }

    for(int i = 0; i < 3; i = i + 1){
        cout << "ok3" << endl;
    }

    for(int i = 0; i < 3; i += 1){
        cout << "ok4" << endl;
    }
    
    return 0;
}