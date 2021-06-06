#include <iostream>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    if (5 * i * (i + 1)/2 > 240 - k) {
      cout << i - 1 << endl;
      return 0;
    }
  }
  cout << n << endl;
  return 0;
}
