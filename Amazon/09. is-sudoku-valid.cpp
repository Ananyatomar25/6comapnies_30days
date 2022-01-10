class Solution{
public:
    int isValid(vector<vector<int>> mat){
     unordered_set<string> m;
       for(int i=0;i<9;i++){
           for(int j=0;j<9;j++){
               if(mat[i][j]!=0){
                   if(m.find("row"+to_string(i) + to_string(mat[i][j]))!=m.end() || 
                       m.find("col"+to_string(j) + to_string(mat[i][j]))!=m.end() ||
                       m.find("box"+to_string(((i/3)*3)+j/3) + to_string(mat[i][j]))!=m.end()){
                           return false;
                       
                   }else{
                       m.insert("row"+to_string(i) + to_string(mat[i][j]));
                       m.insert("col"+to_string(j) + to_string(mat[i][j]));
                       m.insert("box"+to_string(((i/3)*3)+j/3) + to_string(mat[i][j]));
                   }
               }
           }
       }
       return true;
    }
};