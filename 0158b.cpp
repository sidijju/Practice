#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n, g;
  cin >> n;
  int count[5] = {0, 0, 0, 0, 0};
  while(n--){
    cin >> g;
    count[g]++;
  }
  int ans = count[4] + min(count[3], count[1]);
  int p = min(count[3], count[1]);
  count[3] -= p;
  count[1] -= p;
  ans += count[3];
  ans += count[2]/2;
  count[2] -= 2*(count[2]/2);
  while(count[2]>0){
    ans ++;
    count[2]--;
    if(count[1]>=2) count[1]-=2;
    else count[1] -= count[1];
  }
  while(count[1]>0){
    count[1]-=min(4, count[1]);
    ans ++;
  }
  cout << ans << endl;
  return 0;
}
