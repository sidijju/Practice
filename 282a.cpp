#include <iostream>
using namespace std;

int main(){
  int n;
  int x = 0;
  string exe;
  cin >> n;
  while(n-- > 0){
    cin >> exe;
    if(exe.find("-")!=-1) x--;
    else x++;
  }
  cout << x << endl;
  return 0;
}
