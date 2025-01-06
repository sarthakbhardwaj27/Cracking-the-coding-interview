// given a string, write a function to check if it is a permutation of a
// plaindrome.
#include <algorithm> //for std::transform
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool helper(string s) {
  // Handle uppercase and other characters
  std::transform(s.begin(), s.end(), s.begin(),
                 ::tolower);    // Convert to lowercase
  vector<int> charCount(26, 0); // Use int instead of char for count
  for (char ch : s) {
    if (isalpha(ch)) { // Check if it's an alphabet character
      charCount[ch - 'a']++;
    }
  }

  int oddCount = 0;
  for (int count : charCount) {
    if (count % 2 == 1) {
      oddCount++;
    }
  }

  return (oddCount <= 1); // A palindrome permutation can have at most one
                          // character with an odd count.
}

int main() {
  string s;
  getline(cin, s); // Use getline to read the entire line, including spaces.
  bool isPermutation = helper(s);
  if (isPermutation) {
    cout << "Yes, it is a permutation of a palindrome" << endl;
  } else {
    cout << "No, it is not a permutation of a palindrome" << endl;
  }
  return 0;
}
