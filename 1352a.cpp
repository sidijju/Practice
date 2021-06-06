#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
  int t, n;
  cin >> t;
  for (int i = 0; i < t; i ++) {
    cin >> n;
    int d = to_string(n).size();
    int a = d;
    int n2 = n;
    for (int j = 0; j < d; j++) {
      if (n2%10 == 0) {
        a--;
      }
      n2 /= 10;
    }
    cout << a << endl;
    int pow = 1;
    for (int j = 0; j < d; j++) {
      if (n % 10 == 0) {
        n /= 10;
        pow *= 10;
      } else {
        cout << to_string(n%10 * pow) << " ";
        n -= n%10;
        j--;
      }

    }
    cout << endl;
  }
  return 0;
}
