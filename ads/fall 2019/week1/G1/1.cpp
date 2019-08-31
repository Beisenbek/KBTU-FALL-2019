#include <iostream>

using namespace std;


struct myqueue{
    private:
        int a[10];
        int last;
        int first;
    public:
        myqueue(){
            last = 0;
            first = 0;
        } 
        void add(int x){
            a[last] = x;
            last++;
        }
        int cut(){
            int res = a[first];
            first++;
            return res;
        }
};

int main(){

    myqueue q;
    q.add(5);
    q.add(1);
    q.add(11);
    q.add(10);


    cout << q.cut() << endl;
    cout << q.cut() << endl;

    return 0; 
}