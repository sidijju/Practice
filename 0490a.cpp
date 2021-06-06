#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>
#include <queue>
using namespace std;


int solve() {
  int n, l;
  vector<int> o;
  vector<int> t;
  vector<int> th;
  cin >> n;
  for (int i = 1; i <= n; i ++) {
    cin >> l;
    if (l == 1) {
      o.push_back(i);
    } else if (l == 2) {
      t.push_back(i);
    } else {
      th.push_back(i);
    }
  }
  int w = min(min(o.size(), t.size()), th.size());
  cout << w << endl;
  for (int i = 0; i < w; i ++) {
    cout << to_string(o[0]) << " " << to_string(t[0]) << " " << to_string(th[0]) << " " << endl;
    o.erase(o.begin());
    t.erase(t.begin());
    th.erase(th.begin());
  }
  return 0;
}

int main(){
  solve();
  return 0;
}
