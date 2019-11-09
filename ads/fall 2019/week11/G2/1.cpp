#include <iostream>

using namespace std;

struct node{
    node * next[26];
    string prefix;
    bool isWord;
    node(string pr){
        isWord = false;
        prefix = pr;
        for(int i = 0; i < 26; i++){
            next[i] = NULL;
        }
    }
    void print(){
        cout << prefix << "=> is word: " << isWord << endl;
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
    bool find(string s){
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
        return found && cur->isWord;
    }
    
    void print(node * cur){
        cur->print();
        for(int i = 0; i < 26; ++i){
            if(cur->next[i] != NULL){
                print(cur->next[i]);
            }
        }
    }
};

int main(){

    trie t;
    
    string arr[] = {"hello", "world", "hi", "hill"};
    string test[] = {"hello", "wor", "hi", "hill2"};
    
    for(int i = 0; i < 4; ++i){
        t.add_string(arr[i]);
    }

    //t.print(t.root);
    for(int i = 0; i < 4; ++i){
        cout << t.find(test[i]) << " ";
    }

    return 0;
}