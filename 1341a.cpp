#include <iostream>
using namespace std;

int main(){
  int t, n, a, b, c, d; cin >> t;
  while(t-->0){
    cin >> n >> a >> b >> c >> d;
    if((a+b)*n < (c-d) || (a-b)*n > (c+d)) cout << "No" << endl;
    else cout << "Yes" << endl;
  }
  return 0;
}
