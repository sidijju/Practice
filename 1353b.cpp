#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>
#include <queue>
using namespace std;


int solve() {
  int n, k;
  priority_queue<int> a, b;
  cin >> n >> k;
  int c, d, ans = 0;
  for (int i = 0; i < n; i ++) {
    cin >> c;
    a.push(-1 * c);
    ans += c;
  }
  for (int i = 0; i < n; i++) {
    cin >> c;
    b.push(c);
  }
  for (int i = 0; i < k; i++) {
    c = a.top() * -1;
    d = b.top();
    if (d > c) {
      ans += d - c;
      a.pop();
      b.pop();
      a.push(-1 * d);
      b.push(c);
    }
  }
  return ans;
}

int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i ++) {
    cout << solve() << endl;
  }
  return 0;
}
