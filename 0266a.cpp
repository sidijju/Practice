#include <iostream>
using namespace std;

int n;
char str[50];

int main(){
  cin >> n >> str;
  char last = str[0];
  int ans = 0;
  for(int i = 1; i < n; i ++){
    char curr = str[i];
    if(curr == last) ans++;
    last = curr;
  }
  cout << ans << endl;
  return 0;
}
