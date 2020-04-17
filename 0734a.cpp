#include <iostream>
using namespace std;

int main(){
  int n, a = 0, d = 0; cin >> n;
  char games[n]; cin >> games;
  for(int i = 0; i < n; i ++){
    if(games[i] == 'A') a ++;
    else d++;
  }
  if(a > d) cout << "Anton" << endl;
  else if (a==d) cout << "Friendship" << endl;
  else cout << "Danik" << endl;
}
