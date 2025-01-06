// there are three types of edits that can be performed on strings: insert a
// character, remove a character and replace a character. given two strings
// write a function to chck if theyu are one edit (or zero edits) away
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
bool isOneAway(string a, string b) {
  int diff = abs((int)a.length() - (int)b.length());
  if (diff > 1)
    return false;

  int i = 0, j = 0, edits = 0;
  while (i < a.length() && j < b.length()) {
    if (a[i] != b[j]) {
      edits++;
      if (diff == 0) { // Replacement
        i++;
        j++;
      } else if (a.length() > b.length()) { // Deletion in a
        i++;
      } else { // Insertion in a
        j++;
      }
      if (edits > 1)
        return false;
    } else {
      i++;
      j++;
    }
  }
  // Handle any remaining characters (only one string could have more
  // characters)
  edits += (a.length() - i) + (b.length() - j);
  return edits <= 1;
}
int main() {
  string a, b;
  cin >> a >> b;
  if (isOneAway(a, b)) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }
}
