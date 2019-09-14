#include <iostream>

using namespace std;

int f1(int a, int b){
    int res = 1;
    int m = min(a, b);
    for(int i = m; i >= 2; --i){
        if(a % i == 0 && b % i == 0){
            res = i;
            break;
        } 
    }
    return res;
}

int f2(int a, int b){
    if(a % b == 0) return b;
    return f2(b, a % b);
}

void test1(){
    int a[] = {10, 20, 13, 100};
    int b[] = {12,  6, 30, 25};
    int r[] = {2 ,  2,  1, 25};

    int len = sizeof(a) / sizeof(int);
    for(int i = 0; i < len; ++i){
        int r2 = f1(a[i], b[i]);
        if(r2 == r[i]){
            cout << "test " << i + 1 << " passed" << endl;
        }else{
            cout << "test " << i + 1 << " failed" << endl;
        }
    }
}

void test2(){
    int a[] = {10, 20, 13, 100};
    int b[] = {12,  6, 30, 25};
    int r[] = {2 ,  2,  1, 25};

    int len = sizeof(a) / sizeof(int);
    for(int i = 0; i < len; ++i){
        int r2 = f2(max(a[i], b[i]), min(a[i],b[i]));
        if(r2 == r[i]){
            cout << "test " << i + 1 << " passed" << endl;
        }else{
            cout << "test " << i + 1 << " failed" << endl;
        }
    }
}

int main(){

    test2();

    return 0;
}