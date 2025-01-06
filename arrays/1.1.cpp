// is unique: implmenet an algo to determine if a string has all unique
// characters. what if you cannot use additional data structures?
//
#include <bits/stdc++.h>
using namespace std;
bool isUniqueElements(string &s) {
  unordered_set<char> us;
  for (auto ch : s) {
    us.insert(ch);
  }
  return us.size() == s.size();
}
int main() {
  string s;
  cin >> s;
  bool isUnique = isUniqueElements(s);
  if (isUnique) {
    cout << "Elements in the string are unique" << endl;
  } else {
    cout << "elemments are not unique" << endl;
  }
  return 0;
}
