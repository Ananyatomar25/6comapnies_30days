class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int min =0, tot =0, count =0;
        queue<pair<int,int>> rotten;
        int dx[4] ={0,0,1,-1};
        int dy[4] ={1,-1,0,0};
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) tot++;
                if(grid[i][j]==2) rotten.push({i,j});
            }
        }
        
        while(!rotten.empty()){
            int k = rotten.size();
            count+=k;
            
            while(k--){
                int x = rotten.front().first, y = rotten.front().second;
                rotten.pop();
                for(int i=0;i<4;i++){
                    int nx = x+dx[i];
                    int ny = y+dy[i];
                    if(nx <0 || ny<0 || nx >=m || ny>=n || grid[nx][ny]!=1) continue;
                    grid[nx][ny] = 2;
                    rotten.push({nx,ny});
                }
            }
            
            if(!rotten.empty()) min++;
        }
        
        return tot==count?min:-1;
        
    }
};

//TC = O(N*M) // need to push all oranges into the queue
//SC = O(N*M) // all oranges are rotten