class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust)
    {
        int ppl[N];
        vector<pair <int, int>> mp;
        vector<pair <int, int>> :: iterator it;
        int i, vsize = trust.size();
        
        for(i = 0; i < N; i++)
        {
            ppl[i] = 0;
        }
        
        for(i = 0; i < vsize; i++)
        {
            ppl[trust[i][0] - 1] = 1;
            mp.push_back(make_pair(trust[i][0], trust[i][1]));
        }
                 
       for(i = 0; i < N; i++)
        {
            cout<<ppl[i]<<" ";
        } 
        cout<<endl; 
        
        it = mp.begin();                                      
        for(; it != mp.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        } 
        cout<<endl;  
        
        int judge = -1;
        //Condition 2
        for(i = 0; i < N; i++)
        {
            if(ppl[i] == 0){
                judge = i + 1;
                cout<<"judge "<<judge<<" "<<i<<endl;
            }
        }
        
        if(judge == -1)
            return judge;
            
        //condition1                                      
        for(i = 0; i < N; i++)
        {
            if(i+1 != judge && find(mp.begin(), mp.end(), make_pair(i+1, judge)) == mp.end())
                return -1;
        } 
        return judge;
     }                                      
                                              
};
