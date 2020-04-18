#include <iostream>
using namespace std;

int main(){
  int n, c, i = 0, ce = 0, co = 0, ie = -1, io = -1;
  cin >> n;
  while(n-->0){
    cin >> c;
    if(c%2==0){
      ce++;
      ie = i;
    }
    else {
      co ++;
      io = i;
    }
    i++;
  }
  if(co > ce) cout << ie + 1 << endl;
  else cout << io + 1 << endl;
  return 0;
}
