#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int n, k, c = 0, a = 0;
  cin >> n;
  for (int i = 0; i < n; i ++) {
    cin >> k;
    if (k > 0) {
      c += k;
    } else if (c == 0) {
      a += 1;
    } else {
      c -= 1;
    }
  }
  cout << a << endl;
}
