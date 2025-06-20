class Solution {
public:
    int maxDistance(string s, int k) {
        int x=0 , y=0 ,sol = 0 ,pos = 1;
        for(auto c : s){
            switch(c){
                case 'N':
                    x++;
                    break;
                case 'W':
                    y++;
                    break;
                case 'S':
                    x--;
                    break;
                case 'E':
                    y--;
                    break;
            }
            int mandis = abs(x)+abs(y);
            int dis = mandis + min(2 * k,pos - mandis);
            sol = max(sol,dis);
            pos++;
        }
        return sol;
    }
};