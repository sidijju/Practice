#include <iostream>
using namespace std;

int main(){
  int n, m, a = 0; cin >> n >> m;
  while(n*m > 0){
    n--; m--; a++;
  }
  if(a%2==0) cout << "Malvika" << endl;
  else cout << "Akshat" << endl;
  return 0;
}
