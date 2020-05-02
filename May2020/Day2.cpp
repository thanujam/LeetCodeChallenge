class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set <int> jewels;
        int count = 0;;
        
        int i, jlength = J.length();
        for(i = 0;i < jlength; i++)
        {
            jewels.insert(J[i]);
        }
        
        int slength = S.length();
        for(i = 0;i < slength;i++)
        {
            if(jewels.find(S[i]) != jewels.end())
                count++;
        }
        
        return count;
    }
};
