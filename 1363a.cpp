#include <iostream>
using namespace std;

bool form(int o, int t, int x){
  if(x==0) return true;
  if(x==1 && o >= 1) return true;
  if(o>=1 && t>=1) return form(o-1, t, x-1) || form(o, t-1, x-2);
  else if(o>=1) return form(o-1, t, x-1);
  else if(t>=1) return form(o, t-1, x-2);
  else return false;
}

int main(){
  int t, n, x, e, o, k, s; cin >> t;
  while(t-->0){
    cin >> n >> x;
    e = 0;
    o = 0;
    s = 0;
    for(int i = 0; i < n; i ++){
      cin >> k;
      if(k%2 == 0) e++;
      else o++;
    }
    //cout << e << endl;
    //cout << o << endl;
    if(o>=1){
      if(x-1 <= e || x-1 <= (o-1)/2) cout << "Yes" << endl;
      else if(form(e, (o-1)/2, x-1)) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
    else cout << "No" << endl;
  }
  return 0;
}
