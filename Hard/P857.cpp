class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int K) {
        vector<pair<double, int>> v;
        for(int i = 0; i < quality.size(); ++i){
            v.push_back({wage[i] * 1.0 / quality[i], quality[i]});
        }
        
        sort(v.begin(), v.end());
        
        double ans = (double)INT_MAX;
        int sum = 0;
        priority_queue<int> pq;
        for(int i = 0; i < v.size(); ++i){
            if(pq.size() == K){
                sum -= pq.top();
                pq.pop();
            }
            
            auto p = v[i];
            pq.push(p.second);
            sum += p.second;
            
            if(pq.size() == K){
                ans = min(ans, p.first * sum);
            }
        }
        
        return ans;
    }
};