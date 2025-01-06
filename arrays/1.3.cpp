// write a method to replace all spaces in a string with %20. input is "sarthak
// is working  ", 18

#include <bits/stdc++.h>
using namespace std;

void helper(string &s, int len) {
  string ans = "";
  int lastSpaceIdx = s.find_last_not_of(' ');
  for (int i = 0; i <= lastSpaceIdx; i++) {
    if (s[i] == ' ') {
      ans += "%20";
    } else {
      ans += s[i];
    }
  }
  s = ans;
}
int main() {
  string str = "sarthak is working  ";
  int len = 18;
  // cin >> str >> len;
  helper(str, len);
  //  helper2(str, len);
  cout << str << endl;
}
