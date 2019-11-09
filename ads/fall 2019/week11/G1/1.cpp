#include <iostream>
#include <map>

using namespace std;

struct node{
    map<char, node *> next; 
    bool endOfWord;
    string prefix;
    node(string pr){
        endOfWord = false;
        prefix = pr;
    }
};

struct trie{
    node * root;
    
    trie(){
        root = new node("/");
    }

    void addString(string s){
        node * cur = root;
        for(int i = 0; i < s.size(); ++i){
            if(cur->next.find(s[i]) == cur->next.end()){
                cur->next[s[i]] = new node(cur->prefix + s[i]);
            }
            cur = cur->next[s[i]]; 
        }
        cur->endOfWord = true;
    }

    bool find(string s){
        node * cur = root;
        bool found = true;
        for(int i = 0; i < s.size(); ++i){
            if(cur->next.find(s[i]) == cur->next.end()){
                found = false;
                break;
            }
            cur = cur->next[s[i]]; 
        }
        return found && cur->endOfWord;
    }

    void printNode(node * cur){
        cout << cur->prefix << " is it endOfWord: " << cur->endOfWord << "; childs: ";
        map<char,node *>:: iterator it;
        for(it = cur->next.begin(); it != cur->next.end(); ++it){
            cout << it->first << " ";
        }
        cout << endl;
    }

    void print(node * cur){
        printNode(cur); 
        map<char, node *>:: iterator it;
        for(it = cur->next.begin(); it != cur->next.end(); ++it){
            print(it->second);
        }     
    }
};

int main(){

    string arr[] = {"hello", "world","hi", "hel"};
    string test[] = {"hello", "worl", "hi", "h"};

    trie t;
    
    for(int i = 0; i < 4; ++i){
        t.addString(arr[i]);
    }

    //t.print(t.root);
    
    for(int i = 0; i < 4; ++i){
        cout << t.find(test[i]) << " ";
    }

    return 0;
}