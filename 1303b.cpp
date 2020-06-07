#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  long long t, n, g, b, ng, total; cin >> t;
  while(t-->0){
    cin >> n >> g >> b;
    ng = (n+1)/2;
    total = ng/g * (g+b);
    if(ng%g != 0) total += ng%g;
    else total -= b;
    cout << max(n, total) << endl;
  }
  return 0;
}
