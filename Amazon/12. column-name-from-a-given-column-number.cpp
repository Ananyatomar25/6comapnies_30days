class Solution{
    public:
    string colName (long long int n)
    {
        
        string ans = "";
        while(n!=0){
            n--;
            int rem = n%26;
            ans = string(1,rem+'A')+ans;
            n=n/26;
        }
        
        return ans;
    }
};
