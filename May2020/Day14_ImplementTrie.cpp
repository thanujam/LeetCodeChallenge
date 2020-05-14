class Trie {
public:
    
    Trie* t[26];
    bool isEnd;
    
    /** Initialize your data structure here. */
    Trie() {
        
        int i =0;
        for(i = 0;i < 26;i++)
        {
            t[i] = NULL;
        }
        isEnd = false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        int index, i = 0, len = word.length();
        Trie* root = this;
        
        while(i < len)
        { 
            index = word[i] -'a';
            
            if( root->t[index] == NULL)
                root->t[index] = new Trie();
            
            root = root->t[index];
            i++;
         }
        root->isEnd = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        int index, i = 0, len = word.length();
        Trie* root = this;
        
        while(i < len )
        { 
            index = word[i] - 'a';
            
            if( root->t[index] == NULL)
                return false;
            else
                root = root->t[index];
            
            i++;
         }

       return root->isEnd;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {      
        int index, i = 0, len = prefix.length();
        Trie* root = this;
        
        while(i < len )
        { 
            index = prefix[i] - 'a';
            
            if( root->t[index] == NULL)
                return false;
            else
                root = root->t[index];
            
            i++;
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
