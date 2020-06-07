#include <iostream>
#include <vector>
using namespace std;

int main(){
  int t, n;
  cin >> t;
  while(t-->0){
    cin >> n;
    int ans = 0, i = 1;
    while((3 * i * i + i)/2 <n) i++;
    while(n>1){
      if((3 * i * i + i)/2>n) i--;
      else {
        ans ++;
        n -= (3 * i * i + i)/2;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
