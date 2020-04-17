#include <iostream>
using namespace std;

int main(){
  int n, c; cin >> n;
  while(n-->0){
    cin >> c;
    if(c==1){
      cout << "HARD" << endl;
      break;
    }
  }
  if(n==-1) cout << "EASY" << endl;
  return 0;
}
