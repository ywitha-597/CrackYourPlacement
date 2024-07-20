// Find pair with given difference //
class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        unordered_set<int> seen;
        for (int num : arr) {
            if (seen.find(num - x) != seen.end()) {
                return 1;
            }   
            if (seen.find(num + x) != seen.end()) {
                return 1;
            }
        seen.insert(num);
        }
    return -1;
    }
};
