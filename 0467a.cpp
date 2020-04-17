#include <iostream>
using namespace std;

int main(){
  int n, a, b, ans = 0;
  cin >> n;
  while(n-->0){
    cin >> a >> b;
    if(b-a >= 2) ans++;
  }
  cout << ans << endl;
}
