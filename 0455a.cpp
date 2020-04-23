#include <iostream>
using namespace std;

int main(){
  int n; cin >> n;
  int arr[n]; vector<int> cnt(100001); vector<int> dp(100001);
  for(int i = 0; i < n; i ++){
    cin >> arr[i];
    cnt[arr[i]]++;
  }
  dp[0] = 0;
  dp[1] = cnt[1];
  for(int i = 2; i <= n; i ++){
    dp[i] = max(dp[i-1], dp[i-2]+cnt[i]*i);
  }
  cout << dp[n]<< endl;
  return 0;
}
