#include <iostream>
using namespace std;

int main(){
  char str[100];
  cin >> str;
  for(int i = 0; i < 100; i ++){
    if(str[i]=='\0'){
      cout << "NO" << endl;
      break;
    }
    else if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
      cout << "YES" << endl;
      break;
    }
  }
}
