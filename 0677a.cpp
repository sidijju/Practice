#include <iostream>
using namespace std;

int main(){
  int n, h, c, ans = 0;
  cin >> n >> h;
  while(n-->0){
    cin >> c;
    if(c > h) ans ++;
    ans ++;
  }
  cout << ans << endl;
  return 0;
}
