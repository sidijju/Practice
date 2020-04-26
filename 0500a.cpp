#include <iostream>
#include <stack>
using namespace std;

int main(){
  int n, t, x = 1; cin >> n >> t;
  int grid[n+1][n+1]; int arr[n];
  for(int i = 1; i < n; i ++) cin >> arr[i];
  while(x < t) x += arr[x];
  if(x == t) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
