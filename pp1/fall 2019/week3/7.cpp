#include <iostream>

using namespace std;

int main(){

    int i = 0;
    while(i++ < 10){
        cout << i << ": ok" << endl;
    }

    i = 0;
    while(++i < 10){
        cout << i << ": ok2" << endl;
    }
    

    
    return 0;
}