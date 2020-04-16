#include <iostream>
using namespace std;

int main(){
  char str[100];
  int curr = 0;
  char word[] = {'h', 'e', 'l', 'l', 'o'};
  cin >> str;
  for(int i = 0; i < 100; i ++){
    if(str[i] == '\0') break;
    if(str[i] == word[curr]) curr++;
    if(curr == 5) break;
  }
  if(curr == 5) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
