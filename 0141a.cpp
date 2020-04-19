#include <iostream>
using namespace std;

int main(){
  int fq[26], ans = 0; string str1, str2, str3;
  cin >> str1 >> str2 >> str3;
  for(int i = 0; i < 26; i ++) fq[i] = 0;
  for(int i = 0; i < str1.length(); i ++) fq[str1.at(i)-'A']++;
  for(int i = 0; i < str2.length(); i ++) fq[str2.at(i)-'A']++;
  for(int i = 0; i < str3.length(); i ++) fq[str3.at(i)-'A']--;
  for(int i = 0; i < 26; i ++){
    if(fq[i]!=0) {
      ans = 1;
      break;
    }
  }
  if(ans==1) cout << "NO" << endl;
  else cout << "YES" << endl;
  return 0;
}
