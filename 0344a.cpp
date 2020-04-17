#include <iostream>
using namespace std;

int main(){
  int n, ans = 0; cin >> n;
  char last[100], curr[100];
  cin >> last;
  for(int i = 1; i < n; i ++){
    cin >> curr;
    if(curr[0] == last[1]) ans ++;
    last[0] = curr[0]; last[1] = curr[1];
  }
  cout << ans + 1 << endl;
  return 0;
}
