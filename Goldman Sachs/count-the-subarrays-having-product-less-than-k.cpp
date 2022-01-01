class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        //using sliding window technique
        long long start=0,end=0,res=0,p=1;
        
        while(end<n){
            p*=a[end];
            while(start<n and p>=k){
                p=p/a[start];
                start++;
            }
            if(p<k)
            res+=end-start+1;
           
            end++;
        }
        return res;
        
        
    }
};