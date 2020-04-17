#include <iostream>
using namespace std;

int main(){
  int n, ans = 1;
  cin >> n;
  int arr[n]; int ls[n];
  ls[0] = 1; cin >> arr[0];
  for(int i = 1; i < n; i ++){
    cin >> arr[i];
    if(arr[i] >= arr[i-1]) ls[i] = ls[i-1] + 1;
    else ls[i] = 1;
    ans = max(ans, ls[i]);
  }
  cout << ans << endl;
  return 0;
}
