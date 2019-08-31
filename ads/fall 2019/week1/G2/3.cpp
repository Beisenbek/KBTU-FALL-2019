#include <iostream>
#include <vector>

using namespace std;

struct myqueue{
    private:
        vector<int> a;
        int first;
    public:
        myqueue(){
            first = 0;
        }
        void enqueue(int x){
            a.push_back(x);
        }
        int dequeue(){
            int res = a[first];
            first++;
            return res;
        }
};


int main(){

    myqueue q;
    q.enqueue(3);
    q.enqueue(1);
    q.enqueue(2);

    cout << q.dequeue() << endl;


    return 0;
}