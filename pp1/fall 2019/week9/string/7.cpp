#include <iostream>

using namespace std;

int str2int(string s){
    int d = 1;
    int sum = 0;
    for(int i = s.size() - 1; i >= 0; --i){
        sum += d * (int(s[i]) - 48);
        d *= 10;
    }
    return sum;
}

int getArraySize(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == ' ') cnt++;
    }
    return cnt;
}

void str2array(string s, int * a){
    int k = 0;
    string t = "";
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == ' '){
            a[k] = str2int(t); 
            k++;
            t = "";
        }else{
            t += s[i];
        }
    }
}

int main () {

    string s;
    getline(cin, s);
    s += ' ';

    int n = getArraySize(s);
    int q[n];


    str2array(s, q); 

    for(int i = 0; i < n; ++i){
        cout << q[i] << " ";
    }


    return 0;
}