#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  if (m < n) {
    cout << min(n/m * b + (n - n/m) * a, n*a) << endl;
  } else {
    cout << min(b, n*a) << endl;
  }
  return 0;
}
