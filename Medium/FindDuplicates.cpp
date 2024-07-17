// Find all duplicate elements in an array //
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
                mp[nums[i]]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second > 1)
                ans.push_back(it->first);
        }
        return ans;
    }
};
