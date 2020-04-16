#include <iostream>
using namespace std;

int main(){
  string str1, str2;
  int n, i;
  cin >> str1 >> str2;
  n = str1.length();
  for(i = 0; i < n; i ++){
    if(tolower(str1.at(i)) != tolower(str2.at(i))){
      if(tolower(str1.at(i)) < tolower(str2.at(i))) cout << "-1" << endl;
      else cout << "1" << endl;
      break;
    }
  }
  if(i == n) cout << "0" << endl;
  return 0;
}
