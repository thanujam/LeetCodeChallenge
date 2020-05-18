#define MAX 26

class Solution {
public:
    int patFreq[26];
    
    bool isPermutation(string str)
    {
        int strFrq[MAX], strlen = str.length();
        
        for(int i = 0;i < MAX; i++)
        {
            strFrq[i] = 0;
        }
        
        for(int i = 0;i < strlen; i++)
        {
            strFrq[str[i] - 'a']++;
        }
        
        for(int i = 0;i < MAX; i++)
        {
            if(strFrq[i] != patFreq[i])
                return false;
        }
        
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int patlen = s1.length(), strlen = s2.length();
        
        if(patlen > strlen || patlen == 0 || strlen == 0)
            return false;
        
        int i, patValue = 0, strValue = 0;
        for(i = 0; i< patlen; i++)
        {
            patValue += s1[i] - 'a';
            strValue += s2[i] - 'a';
            patFreq[s1[i] - 'a']++;
        }
        
        if(patValue == strValue)
        {
            if(isPermutation(s2.substr(0, patlen)))
                return true;
        }
        
        for(i = patlen; i < strlen; i++)
        {
           strValue = strValue + (s2[i] - 'a') - (s2[i - patlen] - 'a');
             if(patValue == strValue)
                {
                    if(isPermutation(s2.substr(i - patlen + 1, patlen)))
                        return true;
                } 
        }
        
        return false;
    }
};
