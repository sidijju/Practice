#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int n, l, a, b; cin >> n >> l;
  vector< pair<int, int> > d;
  for(int i = 0; i < l; i ++){
    cin >> a >> b;
    d.push_back(make_pair(a, b));
  }
  sort(d.begin(), d.end());
  while(d.size() > 0 && n > d[0].first){
    n += d[0].second;
    d.erase(d.begin());
  }
  if(d.size()>0) cout << "NO" << endl;
  else cout << "YES" << endl;
  return 0;
}
