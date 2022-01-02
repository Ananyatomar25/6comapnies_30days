class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& a) {
        map<string, vector<string>>m;
    
    for(int i=0;i<a.size();i++)
    {
        string s=a[i];
        sort(s.begin(), s.end());
        
        m[s].push_back(a[i]);
    }
    
    
    vector<vector<string> > v;
    
    for(auto i:m)
    {
        v.push_back(i.second);
    }
    
    return v;
    }
};