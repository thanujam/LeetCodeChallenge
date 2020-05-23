

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        unordered_map<char, int> :: iterator it;
       // vector<pair<char, int>> vc;
       // vector<pair<char, int>> :: iterator it1;
        multimap<int, char, greater<>> vc;
        multimap<int, char, greater<>> :: iterator it1;
        
        int i, len = s.length();
        string res = "";
        
        for(i = 0;i < len; i++)
        {
            mp[s[i]]++;
        }
        
       // copy(mp.begin(), mp.end(), back_inserter(vc));            
       // sort(vc.begin(), vc.end(), comp);
        for(it = mp.begin(); it != mp.end() ;it++)
        {
           // cout<<it->first<<" "<<it->second<<endl;
            vc.insert({it->second,it->first});
        }
       
       // cout<<"vector "<<vc.size()<<endl;
        for(it1 = vc.begin(); it1 != vc.end() ;it1++)
        {
           // cout<<it1->first<<" "<<it1->second<<endl;
            for(i = 0;i < it1->first; i++)
              res += it1->second;
        }
         return res;
    }
};
