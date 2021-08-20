#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n == 0)
      cout << "Draw" << endl;
    else
    {
      string str, str1, str2;
      cin >> str;
      int count = 1, count1 = 0;
      for (int i = 1; i < n; i++)
      {
        cin >> str1;
        if (str == str1)
        {
          count++;
        }
        else
        {
          str2 = str1;
          count1++;
        }
      }
      if (count == count1)
        cout << "Draw" << endl;
      else if (count > count1)
        cout << str << endl;
      else
        cout << str2 << endl;
    }
  }
  return 0;
}