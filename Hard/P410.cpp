class Solution {
public:
    bool solve(vector<int>& nums, int m, int sum){
        int n = nums.size(), i = 0, s, cnt = 0;
        while (i < n){
            s = 0;
            while (i < n && s + nums[i] <= sum){
                s += nums[i];
                i++;
            }

            cnt++;
        }
        
        return cnt <= m;
    }
    
    int splitArray(vector<int>& nums, int m) {
        long long left = INT_MIN, right = 0;
        for_each(nums.begin(), nums.end(), [&](int v){
            left = max(left, (long long)v);
            right += v;
        });
        
        int ans = right;
        while(left <= right){
			int mid = (left + right) / 2;
            if(solve(nums, m, mid)){
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return ans;
    }
};