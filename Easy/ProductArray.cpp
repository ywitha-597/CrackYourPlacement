// Product of array except self //
class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       int zcnt = 0;
       long long int product = 1;
       vector<long long int> ans(n, 0);
       for(int i=0; i<nums.size(); i++){
           if(nums[i] == 0) zcnt++;
           else product *= nums[i];
       }
       if(zcnt > 1) return ans;
       else if(zcnt == 1){
           for(int i=0; i<n; i++){
               if(nums[i] == 0) ans[i] = product;
           }
       }
       else{
            for(int i=0; i<n; i++)
                ans[i] = product / nums[i];
       }
       return ans;
    }
};
