class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> mpp;
        for (int i = 0; i<nums.size(); i++) mpp[nums[i]]++;
        
        priority_queue <pair<int,int>> pq;
        
        for (auto it : mpp) {
            pq.push({it.second, it.first});
        }

        vector<int> result;
        while (k--) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
