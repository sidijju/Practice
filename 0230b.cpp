#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}
int main(){
  int n; long long k; cin >> n;
  while(n-->0){
    cin >> k;
    double m = sqrt(k);
    if(m>1 && m==(int) m && isPrime(m)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
