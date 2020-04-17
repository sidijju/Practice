#include <iostream>
using namespace std;

int main(){
  int n, t;
  cin >> n >> t;
  char q[n], old[n]; cin >> q;
  for(int i = 0; i < t; i ++){
    for(int i = 0; i < n; i ++){
      old[i] = q[i];
    }
    for(int j = 0; j < n-1; j ++){
      if(old[j] == 'B' && old[j+1] == 'G'){
        q[j] = old[j+1];
        q[j+1] = old[j];
      }
    }
  }
  for(int i = 0; i < n; i ++){
    cout << q[i];
  }
  cout << endl;
  return 0;
}
