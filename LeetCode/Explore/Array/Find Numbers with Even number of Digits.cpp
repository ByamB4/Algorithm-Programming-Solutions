class Solution {
public:
  int findNumbers(vector <int>&nums) {
    int ans = 0;
    for (int _ = 0; _ < nums.size(); _++) {
      int digits = 0;
      while (nums[_] > 0) {
        digits++;
        nums[_] /= 10;
      }
      ans += (digits % 2 == 0);
    }
    return ans;
  }
}
