#include <iostream>
#include <map>

using namespace std;

struct node{
    map<char, node *> next;
    string prefix;
    bool isWord;
    node(string pr){
        isWord = false;
        prefix = pr;
    }
    void print(){
        cout << prefix << "=> is word: " << isWord << endl;
        map<char, node *> :: iterator it;
        for(it = this->next.begin(); it != this->next.end(); ++it){
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
            if(cur->next.find(s[i]) == cur->next.end()){
                cur->next[s[i]] = new node(cur->prefix + s[i]);
            }
            cur = cur->next[s[i]];
        }
        cur->isWord = true;
    }    
    bool find(string s){
        bool found = true;
        node * cur = root;
        for(int i = 0; i < s.size(); ++i){
            if(cur->next.find(s[i]) == cur->next.end()){
                found = false;
                break;
            }
            cur = cur->next[s[i]];
        }
        return found && cur->isWord;
    }
    
    void print(node * cur){
        cur->print();
        map<char, node *> :: iterator it;
        for(it = cur->next.begin(); it != cur->next.end(); ++it){
           print(it->second);
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

    t.print(t.root);
    for(int i = 0; i < 4; ++i){
        cout << t.find(test[i]) << " ";
    }

    return 0;
}