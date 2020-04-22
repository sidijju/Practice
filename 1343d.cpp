#include <iostream>
#include <vector>
using namespace std;

int main(){
  int t, n, k; cin >> t;
  while(t-->0){
    cin >> n >> k;
    vector<int> cnt(2*k+1); vector<int> pref(2*k+2); vector<int> arr(n);
    for(int i = 0; i < n; i ++) cin >> arr[i];
    for(int i = 0; i < n/2; i ++) {
      cnt[arr[i]+arr[n-i-1]]++;
      pref[min(arr[i], arr[n-i-1])+1]++;
      pref[max(arr[i], arr[n-i-1])+k+1]--;
    }
    for(int i = 1; i <= 2*k+1; i ++) pref[i] += pref[i-1];
    int ans = INT_MAX;
    for(int i = 2; i <= 2*k; i ++){
      ans = min(ans, pref[i]-cnt[i] + (n/2 - pref[i])*2);
    }
    cout << ans << endl;
  }
  return 0;
}
