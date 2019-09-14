#include <iostream>

using namespace std;

int f2(int a, int b){
    if( a % b == 0) return b;
    return f2(b, a % b);
}

int f1(int a, int b){
    int res = 1;

    for(int i = b; i >= 2; --i){
        if(a % i == 0 && b % i == 0){
            res = i;
            break;
        }
    }

    return res;
}

void test1(){
    int  a[] = {10, 20, 30,  12, 100, 11};
    int  b[] = {15, 30, 44, 120,   8, 13};
    int  r[] = { 5, 10,  2,  12,   4,  1};

    int len = sizeof(a) / sizeof(int);

    for(int i = 0; i < len; ++i){
        int t = f1(max(a[i], b[i]), min(a[i],b[i]));
        if(t == r[i]){
            cout << "test: " << i + 1  << " passed." << endl;
        }else{
            cout << "test: " << i + 1  << " failed." << endl;
        }
    }
}

void test2(){
    int  a[] = {10, 20, 30,  12, 100, 11};
    int  b[] = {15, 30, 44, 120,   8, 13};
    int  r[] = { 5, 10,  2,  12,   4,  1};

    int len = sizeof(a) / sizeof(int);

    for(int i = 0; i < len; ++i){
        int t = f2(max(a[i], b[i]), min(a[i],b[i]));
        if(t == r[i]){
            cout << "test: " << i + 1  << " passed." << endl;
        }else{
            cout << "test: " << i + 1  << " failed." << endl;
            cout << t << " " << r[i] << endl;
        }
    }
}


int main(){

    test2();

    return 0;
}