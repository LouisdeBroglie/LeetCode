class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size(), ans = 0;
        vector<vector<bool>> dp(n+1, vector<bool>(n+1, false));
        
        for(int i = 1; i <= n; ++i){
            dp[i][i] = true;
            ans++;
            if(i < n && s[i-1] == s[i]){
                dp[i][i+1] = true;
                ans++;
            }
        }
        
        for(int i = n; i >= 1; --i){
            for(int j = i + 2; j <= n; ++j){
                dp[i][j] = dp[i+1][j-1] && (s[i-1] == s[j-1]);    
                if(dp[i][j]){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};