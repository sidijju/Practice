#include <iostream>
using namespace std;

int main(){
  int n, k, max = 0, min = INT_MAX, maxi = -1, mini = -1; cin >> n;
  for(int i = 0; i < n; i ++){
    cin >> k;
    if(k > max){
      max = k;
      maxi = i;
    }
    if(k <= min){
      min = k;
      mini = i;
    }
  }
  int ans = n + maxi - mini - 1;
  if(maxi > mini) ans --;
  cout << ans << endl;
  return 0;
}
