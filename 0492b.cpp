#include <iostream>
#include <iomanip>  
#include <algorithm>
using namespace std;

int main(){
  int n, l; cin >> n >> l;
  double m = 0;
  double lanterns[n];
  for(int i = 0; i < n; i++) cin >> lanterns[i];
  sort(lanterns, lanterns+n);
  if(lanterns[0]!=0 && lanterns[n-1]!=l) m = max(lanterns[0], l - lanterns[n-1]);
  else if(lanterns[0]!=0) m = lanterns[0];
  else if(lanterns[n-1]!=l) m = l - lanterns[n-1];
  for(int i = 1; i < n; i++) m = max(m, (lanterns[i] - lanterns[i-1])/2.0);
  cout << setprecision(16) << m << endl;
  return 0;
}
