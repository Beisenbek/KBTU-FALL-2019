#include <iostream>
#include <sstream>

using namespace std;

class User{
    public:
        string name;
        string password;
        User(string name, string password){
            this->name = name;
            this->password = password;
        }
        bool Validate(string password){
            return this->password == password;
        }
};

int main(){

    User * user = new User("student","1234");

    cout << user->Validate("1234");

    cout << user->password << endl;


    return 0;
}