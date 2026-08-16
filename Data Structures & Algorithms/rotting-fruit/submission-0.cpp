class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        int freshcnt  = 0;
        queue<pair<int, int>> q;

        for(int i=0;i<m;i++)
        {
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    freshcnt++;
                }
            }
        }

        if(freshcnt==0){
            return 0;
        }

        int time = 0;
        vector<pair<int, int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}}; // right, left, down, up
        while(!q.empty() && freshcnt>0){
            int size = q.size();
            time++;
            for(int i=0; i<size;i++){
                auto position = q.front();
                q.pop();
                for(auto dir : dirs){

                    int x = position.first + dir.first;
                    int y = position.second + dir.second;
                    if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==1){
                        grid[x][y] = 2;
                        q.push({x,y});
                        freshcnt--;
                    }
                }
            }
            
        }

        if(freshcnt>0){
            return -1;
        }
        return time;
        
    }
};