#include <iostream>
using namespace std;

int main(){
  int n, m, c, l=1; long long ans=0; cin >> n >> m;
  for(int i = 0; i < m; i ++){
    cin >> c;
    if(c >= l) ans += c - l;
    else ans += n + c - l;
    l = c;
  }
  cout << ans << endl;
  return 0;
}
