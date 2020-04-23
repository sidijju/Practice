#include <iostream>
#include <vector>
using namespace std;

int main(){
  int t, n, k; cin >> t;
  while(t -- > 0){
    cin >> n >> k;
    int arr[n]; vector<int> peak(n);
    for(int i = 0; i < n; i ++) cin >> arr[i];
    for(int i = 1; i < n-1; i ++){
      if(arr[i-1] < arr[i] && arr[i]>arr[i+1]) peak[i] = 1;
    }
    for(int i = 1; i < n; i ++) peak[i] += peak[i-1];
    int ans = 0; int ansi = 0;
    for(int i = n-k; i >= 0; i --){
      if(peak[i+k-2]-peak[i]>=ans){
        ans = peak[i+k-2]-peak[i];
        ansi = i;
      }
    }
    ans ++;
    ansi ++;
    cout << ans << " " << ansi << endl;
  }
  return 0;
}
