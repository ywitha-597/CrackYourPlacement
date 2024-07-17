// Remove Duplicates from sorted array //
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ele = nums[0], j = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=ele){
                nums[j++] = nums[i];
                ele = nums[i];
            }
            else
                continue;
        }
        return j;
    }
};
