#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int o = n*a;
  for (int i = 1; i <= n/m; i++) {
    o = min(o, i*b + (n-i*m) * a);
  }
  if (n%m != 0) {
    o = min(o, b*(n/m + 1));
  }
  cout << o << endl;
  return 0;
}
