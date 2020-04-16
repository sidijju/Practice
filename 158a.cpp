#include <iostream>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k; k--;
  int arr[n];
  int ans = 0;
  for(int i = 0; i < n; i ++){
    cin >> arr[i];
    if(arr[i] > 0 && i <= k) ans++;
    else if(arr[i] > 0 && arr[i] == arr[k]) ans ++;
    else break;
  }
  cout << ans << endl;
  return 0;
}
