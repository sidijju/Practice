#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  vector<int> a;
  int n, l;
  cin >> n;
  for (int i = 0; i < n;i ++) {
    cin >> l;
    a.push_back(l);
  }
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    ans += a[n-1] - a[i];
  }
  cout << ans << endl;
}
