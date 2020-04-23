#include <iostream>
using namespace std;

int main(){
  long long n;
  cin >> n;
  int denom[5] = {1, 5, 10, 20, 100};
  int curr = 4; long long ans = 0;
  while(n != 0){
    if(n >= denom[curr]) {
      n -= denom[curr];
      ans ++;
    }
    else curr --;
  }
  cout << ans << endl;
  return 0;
}
