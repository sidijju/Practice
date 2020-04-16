#include <iostream>
using namespace std;

int main(){
  int n, i;
  cin >> n;
  for(i = 1; i <= n; i++){
    int c = i;
    while(c > 0){
      if(c%10!=4 && c%10!=7){
        break;
      }else {
        c /= 10;
      }
    }
    if(c == 0 && n%i == 0) break;
  }
  if(i == n + 1) cout << "NO" << endl;
  else cout << "YES" << endl;
  return 0;
}
