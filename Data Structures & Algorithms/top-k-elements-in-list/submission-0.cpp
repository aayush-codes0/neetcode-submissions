class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> result;
        for(int x : nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto y : mp){
            pq.push({y.second, y.first});
        }
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
        
    }
};
