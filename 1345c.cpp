#include <iostream>
using namespace std;

int modulo(int n, int k){
  if(n < 0) return n%k + k;
  else return n%k;
}

int main(){
  int t, n, k; cin >> t;
  vector<int> a(2*100000+1);
  while(t-->0){
    cin >> n;
    for(int i = 0; i < n; i ++) cin >> a[i];
    
  }
  return 0;
}
