#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> v;
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);
  v.push_back(d);
  sort(v.begin(), v.end());
  cout << v[3]-v[2];
  cout << " ";
  cout << v[3] - v[1];
  cout << " ";
  cout << v[3]-v[0] << endl;
}
