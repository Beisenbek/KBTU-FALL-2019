#include <iostream>

using namespace std;

long long powerOfTen(long long n){
    if(n == 0) return 1;
    return 10 * powerOfTen(n - 1);
}

int getNumberLength(long long n){
    if(n >= 0 && n <= 9) return 1;
    return getNumberLength(n / 10) + 1;
}

int getMiddlePart(long long n, long long k, int first){
    return (n - k * first) / 10; 
}

int getFirstDigit(long long n, long long k){
    return n / k;
}

int getLastDigit(long long n){
    return n % 10;
}

bool isPalindrome(long long n){
    cout << n << endl;
    if(n >= 0 && n <= 9) return true;
    int len = getNumberLength(n);
    long long k = powerOfTen(len - 1);
    int f = getFirstDigit(n, k);
    int l = getLastDigit(n);
    if(f != l) return false;
    return isPalindrome(getMiddlePart(n, k, f));
}

int main(){ 

    /*int q, n;

    for(int i = 0; i < q; ++i){
        cin >> n;
        if(isPalindrome(n)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }*/

    long long n;
    cin >> n;

    int len = getNumberLength(n);
    long long k = powerOfTen(len - 1);
    int f = getFirstDigit(n, k);
    
    cout << isPalindrome(n) << endl;

    return 0;
}