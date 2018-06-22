class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n+1, vector<bool>(n+1, false));
        
        int f, t;
        f = t = 1;
        
        for(int i = 1; i <= n; ++i){
            dp[i][i] = true;
            
            if(i < n && s[i-1] == s[i]){
                dp[i][i+1] = true;
                f = i;
                t = i + 1;
            }
        }
        
        for(int i = n; i >= 1; --i){
            for(int j = i + 2; j <= n; ++j){
                dp[i][j] = dp[i+1][j-1] && (s[i-1] == s[j-1]);    
                if(dp[i][j] && j - i + 1 > t - f + 1){
                    f = i;
                    t = j;
                }
            }
        }
        
        return s.substr(f - 1, t - f + 1);
    }
};