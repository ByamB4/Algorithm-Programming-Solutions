class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int imax = 0, current = 0;
    for (int _ = 0; nums.size(); _++) {
      if (nums[_] == 1) current++;
      else {
        imax = max(imax, current);
        current = 0;
      }
    return max(imax, current);
  }
}
