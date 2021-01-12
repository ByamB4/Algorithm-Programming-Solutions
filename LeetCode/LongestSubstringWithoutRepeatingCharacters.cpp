#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, len = 0;
        map<char, int> dict;
        for (int r = 0; r < s.size(); r++) {
            if (dict.find(s[r]) != dict.end()) {
                l = max(l, dict[s[r]] + 1);
            }
            dict[s[r]] = r;
            len = max(len, r - l + 1);
        }
        return len;
    }
};
int main() {
    Solution sol;
    cout << sol.lengthOfLongestSubstring("abcabcbb") << '\n';
    cout << sol.lengthOfLongestSubstring("bbbbb") << '\n';
    cout << sol.lengthOfLongestSubstring("pwwkew") << '\n';
}
