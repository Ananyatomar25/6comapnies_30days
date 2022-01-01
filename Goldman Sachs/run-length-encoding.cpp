string encode(string src)
{     
    string ans="";
    int count =1;
    int n=src.length();
 {
     for(int i=0;i<n;i++)
     {
         ans.push_back(src[i]);
          count=1;
         while(i<n-1 && src[i]==src[i+1])
         {
             count++;
             i++;
         }
         char c=count+'0';
         ans.push_back(c);
     }
 }
 return ans;
}
