#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  vector<int> a;
  int n;
  for (int i = 0; i < 3; i++) {
    cin >> n;
    a.push_back(n);
  }
  sort(a.begin(), a.end());
  cout << a[2] - a[1] + a[1] - a[0] << endl;
}
