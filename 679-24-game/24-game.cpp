class Solution {
public:
double epl=0.1;
bool solve(vector<double>&temp){
    if(temp.size()==1){
        return abs(temp[0]-24.0)<=epl;
    }
    for(int i=0;i<temp.size();i++){
        for(int j=0;j<temp.size();j++){
if(i==j){
    continue;

}
    vector<double>ans;
for(int k=0;k<temp.size();k++){
    if(k!=i and k!=j){
ans.push_back(temp[k]);
    }
}
double a=temp[i];
double b=temp[j];
vector<double>possible={a+b,b-a,a-b,a*b};
   if(abs(b)>0.0) {
                    possible.push_back(a/b);
                }

                if(abs(a)>0.0) {
                    possible.push_back(b/a);
                }

                for(double val:possible) {
                    ans.push_back(val); 
                    if(solve(ans)==true)  
                        return true;
                    ans.pop_back(); 
                }
            }
        }

        return false;
        }
    

    bool judgePoint24(vector<int>& cards) {
        vector<double>temp;
        for(int i=0;i<cards.size();i++){
            temp.push_back(1.0*cards[i]);
        }
        return solve(temp);
    }
};