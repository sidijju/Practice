#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;
  int n = str.length();
  string vowels = "aeiouyAEIOUY";
  for(int i = 0; i < n; i ++){
    if(vowels.find(str.at(i)) == -1) cout << "." << (char) tolower(str.at(i));
  }
  cout << endl;
  return 0;
}
