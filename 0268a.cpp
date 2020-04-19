#include <iostream>
using namespace std;

int main(){
  int n, ans = 0; cin >> n;
  int home[n];
  int away[n];
  for(int i = 0; i < n; i ++){
    cin >> home[i] >> away[i];
  }
  for(int i = 0; i < n; i ++){
    for(int j = i+1; j < n; j++){
      if(home[i]==away[j]) ans ++;
      if(away[i]==home[j]) ans ++;
    }
  }
  cout << ans << endl;
  return 0;
}
