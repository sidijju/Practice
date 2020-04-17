#include <iostream>
using namespace std;

int main(){
  int i, n;
  string f, b;
  cin >> f >> b;
  n = f.length();
  for(i = 0; i < n; i ++){
    if(b.at(i) != f.at(n-i-1)){
      cout << "NO" << endl;
      break;
    }
  }
  if(i == n) cout << "YES" << endl;
  return 0;
}
