#include <iostream>
using namespace std;

int main(){
  int n, p, k; cin >> n;
  int c[n+1];
  for(int i = 0; i <= n; i ++) c[i] = 0;
  for(int i = 0; i < 2; i ++){
    cin >> p;
    for(int j = 0; j < p; j ++){
      cin >> k;
      c[k]=1;
    }
  }
  while(n-->0)
    if(c[n+1]<=0) break;
  if(n >= 0) cout << "Oh, my keyboard!" << endl;
  else cout << "I become the guy." << endl;
  return 0;
}
