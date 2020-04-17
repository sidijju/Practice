#include <iostream>
using namespace std;

int main(){
  char str[100];
  cin >> str;
  bool allUpper = true;
  for(int i = 1; i < 100; i ++){
    if(str[i] == '\0') break;
    else if(!isupper(str[i])){
      allUpper = false; break;
    }
  }
  if(allUpper){
    if(isupper(str[0])) cout << (char) tolower(str[0]);
    else cout << (char) toupper(str[0]);
    for(int i = 1; i < 100; i ++){
      if(str[i] == '\0') break;
      cout << (char) tolower(str[i]);
    }
    cout << endl;
  }
  else {
    cout << str << endl;
  }
  return 0;
}
