#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double n, c, ans = 0; cin >> n;
  for(int i = 0; i < n; i ++){
    cin >> c; ans += c;
  }
  cout << setprecision(8) << ans / n << endl;
  return 0;
}
