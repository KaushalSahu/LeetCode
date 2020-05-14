class Trie {
    Trie* children[26];
    bool isEndOfWord;
public:
    /** Initialize your data structure here. */
    Trie() {
       for(int i = 0; i < 26; i++) {
           children[i] = nullptr;
       }
        isEndOfWord = false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        
        Trie* current = this;
        for (char ch: word) {
            if (!(current->children[ch - 'a'])) {
                current->children[ch - 'a'] = new Trie;
            }
            current = current->children[ch - 'a'];
        }
        current->isEndOfWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        
        Trie* current = this;
        for (char ch: word) {
            current = current->children[ch - 'a'];
            if (!(current)) {
                return false;
            }
        }
        
        if (current->isEndOfWord) {
            return true;
        }
        
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        
        Trie* current = this;
        for (char ch: prefix) {
            current = current->children[ch - 'a'];
            if (!(current)) {
                return false;
            }
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
