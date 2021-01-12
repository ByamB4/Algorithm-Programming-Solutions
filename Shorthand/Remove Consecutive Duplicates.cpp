// Remove Consecutive Duplicates
// aaabccccdee -> abcde

inline string rmConDup(string s) {
  string res = "";
  res += s[0];
  char f = s[0];
  for (int _ = 1; _ < s.length(); _++) {
    char ch = s[_];
    if (ch != f) {
      res += s[_];
      f = s[_];
    }
  }
  return res;
}
