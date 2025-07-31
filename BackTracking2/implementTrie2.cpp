#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    char data;
    bool terminal;
    unordered_map<char, Node*> children;
    int countWordsEndingHere;
    int countWordsStarting;
    
    Node(char data){
        this->data = data;
        this->terminal = false;
        this->countWordsEndingHere = 0;
        this->countWordsStarting = 0;
    }
    
    void makeTerminal(){
        this->terminal = true;
    }
    
    bool isTerminal(){
        return this->terminal;
    }
};

class Trie {
public:
    Node* root;
    
    Trie() {
        root = new Node('\0');
    }
    
    void insert(string word) {
        Node* curr = root;
        curr->countWordsStarting++; // Increment at root for each word
        
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
                curr->countWordsStarting++; // Increment count for existing node
            } else {
                Node* child = new Node(ch);
                curr->children[ch] = child;
                curr = curr->children[ch];
                curr->countWordsStarting++; // Increment count for new node
            }
        }
        curr->makeTerminal();
        curr->countWordsEndingHere++;
    }      
    
    int countWordsEqualTo(string word){
        Node* curr = root;
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
            } else {
                return 0;
            }
        }
        return curr->countWordsEndingHere; // Fixed: removed increment
    }
    
    int countWordsStartingWith(string prefix) {
        Node* curr = root;
        for(int i = 0; i < prefix.size(); i++){
            char ch = prefix[i];
            if(curr->children.count(ch)){
                curr = curr->children[ch];
            } else{
                return 0;
            }
        }
        return curr->countWordsStarting;
    }
    
    bool search(string word) {
        return countWordsEqualTo(word) > 0;
    }
    
    bool startsWith(string prefix) {
        return countWordsStartingWith(prefix) > 0;
    }

    void erase(string word){
        if(countWordsEqualTo(word) == 0) return; // Word doesn't exist
        
        Node* curr = root;
        curr->countWordsStarting--; // Decrement at root
        
        for(int i = 0; i < word.size(); i++){
            char ch = word[i];
            curr = curr->children[ch];
            curr->countWordsStarting--; // Decrement count
        }
        curr->countWordsEndingHere--;
        if(curr->countWordsEndingHere == 0){
            curr->terminal = false;
        }
    }
};

int main(){
    Trie* trie = new Trie();
    
    // Test insertions
    trie->insert("apple");
    trie->insert("app");
    trie->insert("application");
    trie->insert("apply");
    trie->insert("banana");
    
    // Test search
    cout << "Search 'app': " << trie->search("app") << endl;
    cout << "Search 'apple': " << trie->search("apple") << endl;
    cout << "Search 'appl': " << trie->search("appl") << endl;
    
    // Test startsWith
    cout << "Starts with 'app': " << trie->startsWith("app") << endl;
    cout << "Starts with 'ban': " << trie->startsWith("ban") << endl;
    cout << "Starts with 'cat': " << trie->startsWith("cat") << endl;
    
    // Test count functions
    cout << "Words equal to 'app': " << trie->countWordsEqualTo("app") << endl;
    cout << "Words starting with 'app': " << trie->countWordsStartingWith("app") << endl;
    
    // Test erase
    trie->erase("app");
    cout << "After erasing 'app':" << endl;
    cout << "Search 'app': " << trie->search("app") << endl;
    cout << "Words starting with 'app': " << trie->countWordsStartingWith("app") << endl;
    
    return 0;
}