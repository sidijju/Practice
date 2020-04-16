#include <iostream>
using namespace std;

int main(){
  string str;
  cin >> str;
  cout << (char) toupper(str[0]);
  str.erase(str.begin() + 0);
  cout << str << endl;
  return 0;
}
