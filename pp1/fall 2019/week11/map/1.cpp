#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;
    m["apple"] = 5;

    cout << m["apple"] << endl;

    return 0;
}