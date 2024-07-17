// Jump Game //
class Solution {
public:
    bool canJump(vector<int>& nums) {
       int reach = 0;
        for(int i = 0; i < nums.size();i++){
            if(i <= reach){
                reach = max(reach, i+nums[i]);
            }else{
                return false;
            }
        }
        return true;
    }
};
