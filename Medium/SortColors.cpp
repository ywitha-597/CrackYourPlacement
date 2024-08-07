// Sort Colours //
// Approach 1
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) cnt0++;
            else if(nums[i] == 1) cnt1++;
            else if(nums[i] == 2) cnt2++;
        }
        int i = 0;
        for (; cnt0 > 0; cnt0--) nums[i++] = 0;
        for (; cnt1 > 0; cnt1--) nums[i++] = 1;
        for (; cnt2 > 0; cnt2--) nums[i++] = 2;
    }
};
// Approach 2 - Dutch National Flag
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};
