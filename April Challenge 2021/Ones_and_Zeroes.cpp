// You are given an array of binary strings strs and two integers m and n.

// Return the size of the largest subset of strs such that there are at most m 0's and n 1's in the subset.

// A set x is a subset of a set y if all elements of x are also elements of y.

class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        for(auto str: strs){
           int z=0,o=0;
            for(auto c:str){
                if(c=='1'){
                    o++;
                }else{
                    z++;
                }
            }
            for(int i=m;i-z>=0;i--){
                for(int j=n;j-o>=0;j--){
                    dp[i][j]=max(dp[i][j],dp[i-z][j-o]+1);
                }
            }
        }
        return dp[m][n];
    }
};
