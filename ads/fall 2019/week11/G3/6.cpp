#include <iostream>
#include <map>

using namespace std;

struct node{
    bool isWord;
    map<char, node *> next;
    string prefix;
    node(string p){
        isWord = false;
        prefix = p;
    }
    void print(){
        cout << "===" << endl;
        cout << prefix << endl;
        cout << isWord << endl;

        map<char, node *> :: iterator it;
        for(it = next.begin(); it != next.end(); ++it){
            cout << it->first << " ";
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
            if(cur->next[s[i]] == NULL){
                cur->next[s[i]] = new node(cur->prefix + s[i]);
            }
            cur = cur->next[s[i]];
        }
        cur->isWord = true;
    }
    bool find_string(string s){
        bool found = true;
        node * cur = root;
        for(int i = 0; i < s.size(); ++i){
            if(cur->next[s[i]] == NULL){
               found = false;
               break;
            }
            cur = cur->next[s[i]];
        }
        return found && cur->isWord == true;
    }
    void print(node * cur){
        if(cur != NULL){
            cur->print();
            map<char, node *> :: iterator it;
            for(it = cur->next.begin(); it != cur->next.end(); ++it){
                print(it->second);
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

    t.print(t.root);
    
    for(int i = 0; i < 4; ++i){
        cout << t.find_string(q[i]) << " ";
    }

    return 0;
}