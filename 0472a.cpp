#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(){
  int n; cin >> n;
  int a = 4;
  while(isPrime(n-a)) a+=2;
  cout << a << " " << n-a << endl;
  return 0;
}
