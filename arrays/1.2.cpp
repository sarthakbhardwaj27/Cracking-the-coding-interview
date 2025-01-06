// given two strings write a method to decide if one is a permutation of the
// other
#include <bits/stdc++.h>
using namespace std;
bool optimizedHelper(string &a, string &b) {
  vector<char> charCount(26, 0);
  for (auto ch : a) {
    charCount[ch - 'a']++;
  }
  for (auto ch : b) {
    charCount[ch - 'a']--;
  }
  for (int i = 0; i < 26; i++) {
    if (charCount[i] != 0)
      return false;
  }
  return true;
}

bool isPermutationHelper(string &a, string &b) {
  if (a.size() != b.size()) {
    return false;
  }
  // take 2 hashsmaps and compare
  //  or take 1 hashmap and keep reducing the size after comparing from the
  //  second string;
  unordered_map<char, int> um;
  for (auto ch : a) {
    um[ch]++;
  }
  for (auto ch : b) {
    um[ch]--;
  }
  for (auto it : um) {
    if (it.second != 0)
      return false;
  }
  return true;
}
int main() {
  string a, b;
  cin >> a >> b;
  // bool isPermutation = isPermutationHelper(a, b);
  bool isPermutation = optimizedHelper(a, b);
  if (isPermutation) {
    cout << "Yes it is a permutation" << endl;
  } else {
    cout << "No it isnt" << endl;
  }
}
