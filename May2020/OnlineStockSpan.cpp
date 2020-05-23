class StockSpanner {
public:
    stack< pair<int, int> > result;

    StockSpanner() {
    }
    
    int next(int price) {
      
        int n = result.size();
        int i, res = 1;
        
        if(n == 0)
        {
            result.push({price, res});
            return res;
        }
        
      
        if(!result.empty())
        {
            pair<int, int> temp;
            temp = result.top();
            
            if(temp.first > price)
            {
                result.push({price, res});
                return res;
            }
            else
            {
                while(temp.first <= price && !result.empty())
                {
                    res += temp.second;
                    result.pop();
                    if(!result.empty())
                        temp = result.top();
                }
                result.push({price, res});
                return res;
            }
        }
        
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
