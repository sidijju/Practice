#include <iostream>
using namespace std;

int ans  = 0;
bool found[26];
char str[100];

int main(){
  cin >> str;
  char curr = str[0];
  int n = 0;
  while(curr != '\0'){
    if(!found[(int) curr - 97]){
      found[(int) curr - 97] = true;
      ans ++;
    }
    curr = str[++n];
  }
  if(ans%2 == 0) cout << "CHAT WITH HER!" << endl;
  else cout << "IGNORE HIM!" << endl;
  return 0;
}
