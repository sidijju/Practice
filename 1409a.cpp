#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int t, a, b;
  cin >> t;
  for (int i = 0; i < t; i ++) {
    cin >> a >> b;
    int d = abs(a - b);
    if (d % 10 == 0) {
      cout << d/10 << endl;
    } else {
      cout << d/10 + 1 << endl;
    }
  }
  return 0;
}
