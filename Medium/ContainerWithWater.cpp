// Container with most water //
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int area = 0, max_area = INT_MIN;
        while(left < right){
            area = min(height[left], height[right]) * (right - left);
            max_area = max(area, max_area);
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return max_area;
    }
};
