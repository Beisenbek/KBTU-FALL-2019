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
    s += ' ';
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

int sumOfArray(int * a, int n){
    int res = 0;
    for(int i = 0; i < n; ++i){
        res += a[i];
    }
    return res;
}

int multOfArray(int * a, int n){
    int res = 1;
    for(int i = 0; i < n; ++i){
        res *= a[i];
    }
    return res;
}

int main () {
    string line;
    getline(cin, line);
    int k = str2int(line);

    for(int l = 0; l < k; ++l){
        getline(cin, line);
        if(line == "sum numbers"){
            getline(cin, line);
            int n = str2int(line);
            getline(cin, line);
            int q[n];
            str2array(line, q);
            cout << sumOfArray(q, n) << endl;
        }
        else if(line == "mult all numbers"){
            getline(cin, line);
            int n = str2int(line);
            getline(cin, line);
            int q[n];
            str2array(line, q);
            cout << multOfArray(q, n) << endl;
        }
    }


    return 0;
}