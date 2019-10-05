#include <iostream>
#include <stack>
#include <map>

using namespace std;

stack<char> op;
stack<int> num;

bool isdigitx(char c){
    return c <= '9' && c >= '0';
}

bool isbinaryop(char c){
    return c == '+' || c == '*' || c == '-';
}

bool isHighOrEqual(char c1, char c2){
    map<char, int> p;
    p['('] = p[')'] = 0; 
    p['+'] = p['-'] = 1;
    p['*'] = 2;
    if(p[c1] >= p[c2]) return true;
    return false;
}

void doit(){
    char o = op.top();
    op.pop();

    int n1 = num.top();
    num.pop();
    int n2 = num.top();
    num.pop();

    if(o == '*'){
        num.push(n1 * n2);
    }else if(o == '+'){
        num.push(n1 + n2);
    }else if(o == '-'){
        num.push(n2 - n1);
    }
}
int main(){
    string exp;
    cin >> exp;

    for(int i = 0; i < exp.size(); ++i){
        char c  = exp[i];
        if(isdigitx(c)){
            num.push(c - '0');
        }else if(c == '('){
            op.push(c);
        }else if(isbinaryop(c)){
            while(!op.empty() && isHighOrEqual(op.top(), c)){
               doit();
            } 
            op.push(c);
        }else if(c == ')'){
                while(op.top() != '('){
                    doit();
                }
                if(op.top() == '('){
                    op.pop();
                }
            }
    }

    while(!op.empty()){
        doit();
    }

    cout << num.top();

    return 0;
}