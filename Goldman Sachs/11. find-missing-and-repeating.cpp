class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int H[n+1] = {0};
        vector<int> v;
        
        for(int i=0;i<n;i++){
            H[arr[i]]++;
        }
         int a =0,b=0;
        for(int i =1;i<n+1;i++){
            if(H[i] == 2)
            a = i;
            if (H[i] == 0)
            b =i;
        }
        
        int *ans = new int[2];
        ans[0] = a;
        ans[1] = b;
        
        return ans;
    }
};