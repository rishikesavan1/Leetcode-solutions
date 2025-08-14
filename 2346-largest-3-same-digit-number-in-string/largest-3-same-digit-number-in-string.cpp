class Solution {
public:
    string largestGoodInteger(string num) {
        string output = "";
        for(int i = 0; i <= num.size()-3 ; i++){
            if((num[i] == num[i+1] && num[i] == num[i+2]) && num.substr(i,3) > output){
                output = num.substr(i,3);
            }
        }
        return output;
    }
};