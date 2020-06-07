#include <iostream>
#include <vector>
using namespace std;

int main(){
  int t, n, k, c; cin >> t;
  while(t-->0){
    cin >> n >> k;
    int m = 0; vector<int> count(105);
    vector<int> v;
    for(int i = 0; i < n; i ++) {
      cin >> c;
      count[c]++;
      if(count[c]==1){
        m++;
        v.push_back(c);
      }
    }
    if(m > k) cout << -1 << endl;
    else {
      cout << n*k << endl;
      int curr = 1;
      while(v.size()<k){
        if(count[curr]==0){
          v.push_back(curr);
          count[curr] ++;
        }
        curr ++;
      }
      for(int i = 0; i < n; i ++){
        for(int j = 0; j < k; j ++){
          cout << v[j] << " ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}
