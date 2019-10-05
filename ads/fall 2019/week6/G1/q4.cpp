#include <iostream>
#include <vector>

using namespace std;

#define NN 34000 

int main(){

    bool isPrime[NN + 1];
    vector<int> v;

    for(int i = 2; i <= NN; i++){
        isPrime[i] = true;
    }

    v.push_back(0);

    for(int i = 2; i <= NN; i++){
        if(isPrime[i]){
            v.push_back(i);
            for(int j = i * i; j <= NN;  j += i){
                isPrime[j] = false;
            }
        }
    }

    int cnt = 0;
    int n;
    //cin >> n;

    //2 3 5 7 ..
    //0 1 2 3 ..

    cout << "int a[] = {";
    for(int i = 1; i < v.size(); ++i){
        if(isPrime[i]){
            cnt++;
            cout << v[i]  << ", ";
        }
    }
    cout << "};";

    return 0;
}