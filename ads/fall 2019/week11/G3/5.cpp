#include <iostream>

using namespace std;

struct node{
    bool isWord;
    node * next[26];
    string prefix;
    node(string p){
        isWord = false;
        prefix = p;
        for(int i = 0; i < 26; ++i){
            next[i] = NULL;
        }
    }
    void print(){
        cout << "===" << endl;
        cout << prefix << endl;
        cout << isWord << endl;
        for(int i = 0; i < 26; ++i){
            if(next[i] != NULL){
                cout << char(i + 'a') << " ";
            }
        }
        cout << endl;
    }
};

struct trie{
    node * root;
    trie(){
        root = new node("/");
    }
    void add_string(string s){
        node * cur = root;
        for(int i = 0; i < s.size(); ++i){
            int x = s[i] - 'a';
            if(cur->next[x] == NULL){
                cur->next[x] = new node(cur->prefix + s[i]);
            }
            cur = cur->next[x];
        }
        cur->isWord = true;
    }
    bool find_string(string s){
        bool found = true;
        node * cur = root;
        for(int i = 0; i < s.size(); ++i){
            int x = s[i] - 'a';
            if(cur->next[x] == NULL){
               found = false;
               break;
            }
            cur = cur->next[x];
        }
        return found && cur->isWord == true;
    }
    void print(node * cur){
        if(cur != NULL){
            cur->print();
            for(int i = 0; i < 26; ++i){
                if(cur->next[i] != NULL){
                    print(cur->next[i]);
                }
            }
        }
    }
};

int main(){

    string a[] = {"hello", "hi", "test"};
    string q[] = {"hi", "he", "st", "test"};

    trie t;
    for(int i = 0; i < 3; ++i){
        t.add_string(a[i]);
    }

    //t.print(t.root);
    for(int i = 0; i < 4; ++i){
        cout << t.find_string(q[i]) << " ";
    }

    return 0;
}