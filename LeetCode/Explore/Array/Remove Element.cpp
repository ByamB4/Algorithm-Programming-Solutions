class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    int _ = 0, n = nums.size();
    while (_ < n) {
      if (nums[_] == val) {
        nums[_] = nums[n- 1];
        n--;
      } else _++;
    }
    return n;
  }
};
