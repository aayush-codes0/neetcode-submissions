class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto y : mp){
             pq.push({y.second , y.first});
        }
        int result = pq.top().second;
       
        return result;
        
    }
};