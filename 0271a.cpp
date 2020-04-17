#include <iostream>
using namespace std;

bool distinct(int n){
  if(n/1000 != ((n/100) % 10) &&
     n/1000 != ((n/10) % 10) &&
     n/1000 != n%10 &&
     ((n/100) % 10) != ((n/10) % 10) &&
     ((n/100) % 10) != n%10 &&
     ((n/10) % 10) != n%10) return true;
  return false;
}

int main(){
  int n; cin >> n; n++;
  while(!distinct(n)){n++;}
  cout << n << endl;
  return 0;
}
