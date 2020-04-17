#include <iostream>
using namespace std;

int main(){
  int upper = 0, lower = 0;
  string in;
  cin >> in;
  for(int i = 0; i < in.length(); i ++){
    if(isupper(in.at(i))) upper ++;
    else lower ++;
  }
  if(upper > lower){
    for(int i = 0; i < in.length(); i++){
      cout << (char) toupper(in.at(i));
    }
    cout << endl;
  }
  else {
    for(int i = 0; i < in.length(); i++){
      cout << (char) tolower(in.at(i));
    }
    cout << endl;
  }
  return 0;
}
