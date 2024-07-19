// Three sum //
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i >0 && nums[i] == nums[i-1])
                continue;
            int ele = nums[i], low = i+1, high = nums.size()-1;
            while(low < high){
                int sum = ele + nums[low] + nums[high];
                if(sum == 0){
                    ans.push_back({ele, nums[low], nums[high]});
                    while (low < high && nums[low] == nums[low + 1]) low++;
                    while (low < high && nums[high] == nums[high - 1]) high--;
                    low++;
                    high--;
                } 
                else if(sum < 0)
                    low++;
                else
                    high--;
            }
        }
        return ans;
    }
};
