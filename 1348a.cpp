#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int t, n; cin >> t;
  while(t-->0){
    cin >> n;
    cout << pow(2, n/2+1) - 2 << endl;
  }
  return 0;
}
