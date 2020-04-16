#include <iostream>
using namespace std;

int main(){
  string str;
  cin >> str;
  int n = str.length();
  int l = str.at(0) - '0';
  int curr = 1;
  for(int i = 1; i < n; i ++){
    int c = str.at(i) - '0';
    if(c == l) curr ++;
    else curr = 1;
    if(curr == 7) break;
    l = c;
  }
  if(curr == 7) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
