class Solution{   
public:
    string printMinNumberForPattern(string S){
        string ans="";
        stack<int> st;
        int num=1;
        for(int i=0;i<S.length();i++){
            char ch = S[i];
            if(ch=='D'){
                st.push(num);
                num++;
            }
            else if(ch=='I'){
                st.push(num);
                num++;
             while(!st.empty()){
                 ans+=to_string(st.top());
                 st.pop();
                 }
            }
        }
        
        st.push(num);
        while(!st.empty()){
                 ans+=to_string(st.top());
                 st.pop();
                 }
                 
                 return ans;
        
    }
};