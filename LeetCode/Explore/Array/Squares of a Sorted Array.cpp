class Solution {
public:
  vector<int> sortedSquares(vector<int>& nums) {
    for (int _ = 0; _ < nums.size(); _++) nums[_] = pow(nums[_], 2);
    sort(nums.begin(), nums.end());
    return nums;
  }
};
