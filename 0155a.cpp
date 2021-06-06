#include <iostream>
using namespace std;

int main(){
  int n, k, a = 0;
  cin >> n >> k;
  int b = k, w = k;
  for (int i = 1; i < n; i++) {
    cin >> k;
    if (k > b) {
      b = k;
      a++;
    }
    else if (k < w) {
      w = k;
      a++;
    }
  }
  cout << a << endl;
}
