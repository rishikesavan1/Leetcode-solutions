class Solution {
public:
    bool isBalanced(string num) {
        int evensum = 0 , oddsum = 0;
        for(int i = 0 ; i < num.size() ; i++)
            if(i%2) 
                evensum += '0' - num[i];
            else
                oddsum += '0' - num[i];     
        return oddsum == evensum;
    }
};