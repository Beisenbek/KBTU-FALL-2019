#include <iostream>

using namespace std;

int main(){
    
    string str;
    cin >> str;
    int n = str.size();
    char buffer[n + 1];
    str.copy(buffer, 2, 0);
    buffer[2] = '\0';
    //buffer[n] = '\0';
    
    cout << buffer << endl;

    return 0;
}