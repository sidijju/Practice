#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t, n, c;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    vector<int> a;
    for (int j = 0; j < n; j++) {
      cin >> c;
      a.push_back(c);
    }
    sort(a.begin(), a.end());
    int j = 0;
    for (;j < n - 1; j++) {
      if (a[j + 1] - a[j] > 1) {
        cout << "NO" << endl;
        break;
      }
    }
    if (j == n - 1) {
      cout << "YES" << endl;
    }
  }
  return 0;
}
