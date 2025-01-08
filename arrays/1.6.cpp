// string compression: implement a method to perform basic string compressions
// using the counts of repeated characters: aabcccccaaa -> a2b1c5a3 if the
// length of compressed string is not less than original then return original
// string
#include <bits/stdc++.h>
#include <string>
using namespace std;
string helper(string s) {
  string ans = "";
  int n = s.size();
  char prev = s[0];
  int counter = 1;
  for (int i = 1; i < n; i++) {
    if (s[i] == prev) {
      counter++;
    } else {
      ans += prev;
      ans += to_string(counter);
      prev = s[i];
      counter = 1;
    }
  }
  // last character will never add because we did not do to the else statement
  ans += prev;
  ans += to_string(counter);
  return ans;
}
int main() {
  string s;
  cin >> s;
  string compressedString = helper(s);
  if (s.size() <= compressedString.size()) {
    cout << s << endl;
  } else {
    cout << compressedString << endl;
  }
}
