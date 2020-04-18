#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  cin >> str;
  while(str.find("WUB") != string::npos){
    str.replace(str.find("WUB"), 3, " ");
  }
  for(int i = 0; i < str.length(); i ++){
    if(str.at(i) == ' '){
      if(i == 0 || str.at(i-1) == ' ') {
        str.replace(i, 1, ""); i--;
      }
    }
  }
  cout << str << endl;
  return 0;
}
