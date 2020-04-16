#include <iostream>
using namespace std;

int main(){
  int n, a, b;
  int ans = 0;
  int pass = 0;
  cin >> n;
  while(n-- > 0){
    cin >> a >> b;
    ans = max(ans, b-a+pass);
    pass += b-a;
  }
  cout << ans << endl;
}
