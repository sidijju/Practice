#include <iostream>
using namespace std;

int main(){
  int t, n, m, k; cin >> t;
  while(t-- > 0){
    cin >> n >> m;
    int nt=0, mt=0;
    int taken[2][51] = {0};
    for(int i=1; i<=n; i++){
      for(int j=1; j<=m; j++){
        cin >> k;
        if(k==1){
          taken[0][i] = true;
          taken[1][j] = true;
        }
      }
    }
    for(int i=1; i<=n; i++){
      if(taken[0][i]) nt ++;
    }
    for(int i=1; i<=m; i++){
      if(taken[1][i]) mt ++;
    }
    int moves = min((n-nt), (m-mt));
    if(moves % 2 == 0) cout << "Vivek" << endl;
    else cout << "Ashish" << endl;

  }
  return 0;
}
