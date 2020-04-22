#include <iostream>
using namespace std;

int main(){
  int t, n; cin >> t;
  while(t-->0){
    cin >> n;
    if(n%4==0){
      cout << "YES" << endl;
      for(int i = 2; i <= n+1; i+=2) cout << i << " ";
      for(int i = 1; i <= n+1; i+=2) {
        if(i!=n/2+1) cout << i << " ";
      }
      cout << endl;
    } else cout << "NO" << endl;
  }
  return 0;
}
