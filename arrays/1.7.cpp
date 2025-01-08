// rotate matrix: given an image represented by an nxn matrix, where each pixel
// in the image is 4 bytes, write a method to rotate the image by 90 degrees.
// can you do this in place?
#include <bits/stdc++.h>
using namespace std;
void helper(vector<vector<int>> &a) {
  // transpose
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      swap(a[i][j], a[j][i]);
    }
  }
  // reverse
  for (int i = 0; i < 3; i++) {
    reverse(a[i].begin(), a[i].end());
  }
}
int main() {
  vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  helper(a);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
