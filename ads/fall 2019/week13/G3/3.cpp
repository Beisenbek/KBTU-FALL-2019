#include <iostream>
#include <set>

#define MS 10000001
#define Q 10000007
#define B 31

using namespace std;


int p[MS];
int preffix_hashes[MS];

void prepare_p(){
    p[0] = 1;
    for(int i = 1; i < MS; ++i){
        p[i] = (p[i-1] * B) % Q;
    }
}

void generateAllPrefixHash(string text){
    preffix_hashes[0] = (text[0] - 'a' + 1) * p[0];
    for(int i = 1; i < text.size(); ++i){
        int k = (text[i] - 'a' + 1);
        preffix_hashes[i] = (preffix_hashes[i-1] +  (k * p[i]) % Q ) % Q;
    }
}

int thash(string text){
    int res = (text[0] - 'a' + 1) * p[0];
    for(int i = 1; i < text.size(); ++i){
        int k = (text[i] - 'a' + 1);
        res = (res + (k * p[i]) % Q) % Q;
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    
    prepare_p();
    generateAllPrefixHash(s);

    int n;
    cin >> n;
    set<int> dictionary_hash;
    string word;

    for(int i = 0; i < n; ++i){
        cin >> word;
        int h = thash(word);
        dictionary_hash.insert(h);
    }

    bool found = false;

    for(int i = 1; i < s.size() - 1; ++i){
        int hash_preffix = preffix_hashes[i - 1];
        if(dictionary_hash.find(hash_preffix) != dictionary_hash.end()){
            string suffix  = s.substr(i);
            int hash_suffix = thash(suffix);
            if(dictionary_hash.find(hash_suffix) != dictionary_hash.end()){
                found = true;
                break;
            }
        }
    }

    if(found){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}