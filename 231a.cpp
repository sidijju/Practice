#include <iostream>
using namespace std;

int main(){
  int n, a, b, c;
  int ans = 0;
  cin >> n;
  while(n-- > 0){
    cin >> a >> b >> c;
    if(a + b + c >= 2) ans ++;
  }
  cout << ans << endl;
}
