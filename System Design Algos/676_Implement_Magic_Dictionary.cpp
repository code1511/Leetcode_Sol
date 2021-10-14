class MagicDictionary {
    unordered_map<string,char> mp;
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
        for(auto& s:dictionary){
            for(auto& ch:s){
                char temp=ch;
                ch='*';
                auto it=mp.find(s);
                if(it!=mp.end())
                    it->second=0;
                else
                    mp[s]=temp;
                ch=temp;
            }
        }
    }
    
    bool search(string word) {
        for(auto& ch:word){
            char temp=ch;
            ch='*';
            auto it=mp.find(word);
            if(it!=mp.end() && it->second!=temp)
                return true;
            ch=temp;
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
