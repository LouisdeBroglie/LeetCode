class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 1));
        
        for(int i = 1; i <= n; ++i){
            if(i < n && s[i-1] == s[i]) dp[i][i+1] = 2;
        }
        
        for(int i = n; i >= 1; --i){
            for(int j = i + 2; j <= n; ++j){
                dp[i][j] = max(dp[i][j], dp[i+1][j-1] + (s[i-1] == s[j-1] ? 2 : 0));
                dp[i][j] = max(dp[i][j], dp[i+1][j]);
                dp[i][j] = max(dp[i][j], dp[i][j-1]);
            }
        }
        
        return dp[1][n];
    }
};