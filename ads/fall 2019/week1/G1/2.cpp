#include <iostream>
#include <vector>

using namespace std;

struct myqueue{
    private:
        vector<int> v;
        int first;
    public:
        myqueue(){
            first = 0;
        } 
        void enqueue(int x){
            v.push_back(x);
        }
        int dequeue(){
            int res = v[first];
            first++;
            return res;
        }
};

int main(){

    myqueue q;
    q.enqueue(5);
    q.enqueue(1);
    q.enqueue(11);
    q.enqueue(10);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    return 0; 
}