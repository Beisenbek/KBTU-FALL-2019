#include <iostream>

using namespace std;

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

bool isPrime[1000];

void init(int x){

    for(int i = 2; i <=x; ++i){
        isPrime[i] = true;
    }
    
    isPrime[1] = false;

    for(int i = 2; i <= x; ++i){
        if(isPrime[i] == true){
            int t = i + i;
            while (t <= x){
                isPrime[t] = false;
                t += i;
            }
        }
    } 

    /*for(int i = 2; i <= x; ++i){
        if(isPrime[i]){
            cout << i << " ";
        }
    }

    cout << endl;
    */


}

bool f3(int x){
    return isPrime[x];
}

void test1(){
    int  a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 100, 97};
    bool r[] = {0, 1, 1, 0, 1, 0, 1, 0, 0,  0, 1, 0, 1};
    int len = sizeof(a) / sizeof(int);
    for(int i = 0; i < len; ++i){
        int r2 = f1(a[i]);
        if(r2 == r[i]){
            cout << "test " << a[i] << " passed" << endl;
        }else{
            cout << "test " << a[i] << " failed" << endl;
        }
    }
}

void test2(){
    int  a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    bool r[] = {0, 1, 1, 0, 1, 0, 1, 0, 0,  0, 1};
    int len = sizeof(a) / sizeof(int);
    for(int i = 0; i < len; ++i){
        int r2 = f2(a[i]);
        if(r2 == r[i]){
            cout << "test " << a[i] << " passed" << endl;
        }else{
            cout << "test " << a[i] << " failed" << endl;
        }
    }
}

void test3(){
    
    init(100);

    int  a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    bool r[] = {0, 1, 1, 0, 1, 0, 1, 0, 0,  0, 1};
    int len = sizeof(a) / sizeof(int);
    for(int i = 0; i < len; ++i){
        int r2 = f3(a[i]);
        if(r2 == r[i]){
            cout << "test " << a[i] << " passed" << endl;
        }else{
            cout << "test " << a[i] << " failed" << endl;
        }
    }
}

int main(){

    test3();

    return 0;
}