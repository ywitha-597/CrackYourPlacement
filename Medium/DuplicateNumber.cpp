// Find the duplicate number //
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tore = nums[0], hare = nums[0];
        do{
            tore = nums[tore];
            hare = nums[nums[hare]];
        }while(tore != hare);

        tore = nums[0];
        while(tore != hare){
            tore = nums[tore];
            hare = nums[hare];
        }
        return hare;
    }
};