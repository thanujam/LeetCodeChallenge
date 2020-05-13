class Solution {
public:
    void func(string str, int k, string& res);
    
    string removeKdigits(string num, int k) {
        string res = "";
      func(num, k, res);
        
        int i = 0;
        while(res[i] == '0')
            i++;
        
        res = res.substr(i, num.length() - i);
    
       return (res == "") ? "0" : res;
    }
};
       
void Solution :: func(string str, int k, string& res)
{
    int len = str.length();
        
    if(k == 0)
    {
       // res.append(str);
        res += str;
        return;
    }
    
    if(len == k)
        return;
    
    int i , minIndex = 0;
    for(i = 1;i <= k; i++)
    {
        if(str[i] < str[minIndex])
            minIndex = i;
    }
       
    res.push_back(str[minIndex]);
    string new_str;
    new_str = str.substr(minIndex+1, len - minIndex);
    
    //cout<<minIndex<<" "<<str[minIndex]<<" "<<new_str<<" "<<res<<endl;
    func(new_str,k-minIndex , res);
    
    //return res;
}
