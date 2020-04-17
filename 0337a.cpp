#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, m, k, best = INT_MAX; cin >> m >> n;
  vector<int> v;
  for(int i = 0; i < n; i ++){
    cin >> k;
    v.push_back(k);
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n-m+1; i ++){
    best = min(best, v[i+m-1] - v[i]);
  }
  cout << best << endl;
  return 0;
}
