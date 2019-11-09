#include <iostream>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
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

    public:
        string replaceWords(vector<string>& dict, string sentence) {
            trie t;
            for(int i = 0; i < dict.size(); ++i){
                t.add_string(dict[i]);
            }

            stringstream ss;
            string res = "";
            ss << sentence;
            string str;

            while(ss >> str){
                string temp = "";
                bool found = false;
                for(int i = 0; i < str.size(); ++i){
                    temp += str[i];
                    if(t.find(temp) == true){
                        res += temp + " ";
                        found = true;
                        break;
                    }
                }
                if(!found){
                    res += str + " ";
                }
            }

            return res.substr(0,res.size() - 1);
        }
};

void test1(){
    Solution s;

    vector<string> dict;
    dict.push_back("cat");
    dict.push_back("rat");
    dict.push_back("bat");
    string sentence = "the cattle was rattled by the battery";
    
    cout << s.replaceWords(dict, sentence) << endl;
    
}

void test2(){
    Solution s;

    vector<string> dict;
    dict.push_back("cat");
    dict.push_back("rat");
    dict.push_back("ratt");
    dict.push_back("bat");
    string sentence = "the cattle was rattled by the battery";
    
    cout << s.replaceWords(dict, sentence) << endl;
    
}

int main(){

    test1();
    test2();

    return 0;
}