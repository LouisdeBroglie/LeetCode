class Solution {
public:
    int maxEnvelopes(vector<pair<int, int>>& ev) {
        sort(ev.begin(), ev.end(), [](auto left, auto right){
            if(left.first == right.first){
                return left.second <= right.second;
            }
            return left.first < right.first;
        });
        
        int n = ev.size(), ans = 0;
        
        vector<int> dp(n, 1);
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < i; ++j){
                if(ev[i].first > ev[j].first && ev[i].second > ev[j].second){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }

            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};