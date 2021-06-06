#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin >> n;
  cout << max(max(n, n/10), (n - n%100)/10 + n%10) << endl;
}
