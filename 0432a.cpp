#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  vector<int> a;
  int n, k, l;
  cin >> n >> k;
  for (int i = 0; i < n; i ++) {
    cin >> l;
    if (l + k <= 5) {
      a.push_back(l);
    }
  }
  cout << a.size()/3 << endl;
}
