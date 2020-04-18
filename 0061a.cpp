#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  char str1[100], str2[100];
  cin >> str1 >> str2;
  for(int i = 0; i < 100; i ++){
    if(str1[i] == '\0') break;
    if(str1[i]==str2[i]) cout << "0";
    else cout << "1";
  }
  cout << endl;
  return 0;
}
