#include <iostream>
using namespace std;

int main(){
  int t, n; cin >> t;
  while(t-->0){
    cin >> n;
    for(int k = 4; k <= n+1; k*=2){
      if(n%(k-1)==0){
        cout << n/(k-1) << endl;
        break;
      }
    }
  }
  return 0;
}
