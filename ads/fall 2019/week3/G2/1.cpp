#include <iostream>

using namespace std;

bool isPrime[1000];

void init(int x){
    for(int i = 2; i<=x; ++i){
        isPrime[i] = true;
    }
    isPrime[1] = false;

    for(int i = 2; i <= x; ++i){
        if(isPrime[i] == true){
            int t = i + i;
            while(t <= x){
                isPrime[t] = false;
                t += i;
            }
        }
    }
}

bool f1(int x){
    if(x == 1) return false;

    bool res = true;
    for(int i = 2; i < x; ++i){
        if(x % i == 0){
            res = false;
            break;
        }
    }

    return res;
}

bool f2(int x){
    if(x == 1) return false;

    bool res = true;
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0){
            res = false;
            break;
        }
    }

    return res;
}

bool f3(int x){
    return isPrime[x];
}

void test1(){
    int  a[] = {1, 2, 3, 4, 5, 6, 7, 31, 19, 90};
    bool r[] = {0, 1, 1, 0, 1, 0, 1,  1,  1,  0};
    int len = sizeof(a) / sizeof(int);

    for(int i = 0; i < len; ++i){
        int t = f1(a[i]);
        if(t == r[i]){
            cout << "test: " << i + 1  << " passed." << endl;
        }else{
            cout << "test: " << i + 1  << " failed." << endl;
        }
    }
}

void test2(){
    int  a[] = {1, 2, 3, 4, 5, 6, 7, 31, 19, 90};
    bool r[] = {0, 1, 1, 0, 1, 0, 1,  1,  1,  0};
    int len = sizeof(a) / sizeof(int);

    for(int i = 0; i < len; ++i){
        int t = f2(a[i]);
        if(t == r[i]){
            cout << "test: " << i + 1  << " passed." << endl;
        }else{
            cout << "test: " << i + 1  << " failed." << endl;
        }
    }
}

void test3(){

    init(100);

    int  a[] = {1, 2, 3, 4, 5, 6, 7, 31, 19, 90};
    bool r[] = {0, 1, 1, 0, 1, 0, 1,  1,  1,  0};
    int len = sizeof(a) / sizeof(int);

    for(int i = 0; i < len; ++i){
        int t = f3(a[i]);
        if(t == r[i]){
            cout << "test: " << i + 1  << " passed." << endl;
        }else{
            cout << "test: " << i + 1  << " failed." << endl;
        }
    }
}


int main(){

    test3();

    return 0;
}