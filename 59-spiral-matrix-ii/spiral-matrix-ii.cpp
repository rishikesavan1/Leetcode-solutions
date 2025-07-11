class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n,0));
        queue<pair<pair<int,int>,int>> q;
        q.push({{0,0},1});

        int cnt = 1;
        while(!q.empty()){
            int x = q.front().first.first;
            int y = q.front().first.second;
            int num = q.front().second;
            q.pop();
            ans[x][y] = cnt;
            cnt++;

            if (num == 1){
                if (y+1<n && ans[x][y+1] == 0){
                    q.push({{x,y+1},1});
                }
                else{
                    if(x+1<n && ans[x+1][y] == 0){
                        q.push({{x+1 , y}, -2});
                    }
                }
            }
            if (num == -1){
                if (y-1>=0 && ans[x][y-1] == 0){
                    q.push({{x, y-1}, -1});
                }
                else{
                    if (x-1>= 0 && ans[x-1][y] == 0){
                        q.push({{x-1, y}, 2});
                    }
                }
            }
            if ( num == 2){
                if (x-1>=0 && ans[x-1][y] == 0){
                    q.push({{x-1 , y}, 2});
                }
                else{
                    if(y+1< n && ans[x][y+1] == 0){
                        q.push({{x,y+1}, 1});
                    }
                }
            }
            if (num == -2){
                if (x+1<n && ans[x+1][y] == 0){
                    q.push({{x+1, y}, -2});
                }
                else{
                    if (y-1>=0 && ans[x][y-1] == 0){
                        q.push({{x, y-1} , -1});
                    }
                }
            }
        }
        return ans;
    }
};