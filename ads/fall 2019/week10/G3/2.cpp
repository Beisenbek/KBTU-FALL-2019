#include <iostream>

using namespace std;

int main(){

    string text  =   "hello world!";
    string pattern = "worldx";

    int n = text.size();
    int m = pattern.size();

    for(int i = 0; i <= n - m; ++i){
        bool match = true;
        for(int j = 0; j < m; ++j){
            if(text[i + j] != pattern[j]){
                match = false;
                break;
            }
        }
        if(match){
            cout << "found!";
            break;
        }
    }




    return 0;
}