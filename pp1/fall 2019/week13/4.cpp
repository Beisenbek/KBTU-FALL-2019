#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    int i = 1;
    string winner;

    while(x > 0){
        winner = "Bob";
        x -= i;
        if(x > 0){
            x -= 2 * i;  
            winner = "Nelson";  
        }else{
            break;
        }
        i++;
    }

    cout << winner;

    return 0;
}