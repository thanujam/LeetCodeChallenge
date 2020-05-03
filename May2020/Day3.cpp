class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       
        unordered_map <char, int> map;
        
        int i, mlength = magazine.length(), rlength = ransomNote.length();
        for(i = 0;i < mlength; i++)
        {
            if(map.find(magazine[i]) != map.end())
            {
                map[magazine[i]]++;
            }else
                map.insert({magazine[i] , 1});
        }
        
        /*
        for(auto it = map.begin(); it != map.end(); it++)
        {
            cout<< it->first<<" "<<it->second<<endl;

        }
        cout<<endl;  */          
            
        
        for(i = 0;i < rlength; i++)
        {
            if(map.find(ransomNote[i]) == map.end() || map[ransomNote[i]] == 0)
                return false;
            else 
                map[ransomNote[i]]--;
        }
        
        return true;
    }
};
