#include <iostream>
using namespace std;

long long minSteps(long long x, long long y, long long a, long long b){
  if(x==0&y==0) return 0;
  if(x==0) return y*a;
  if(y==0) return x*a;
  else {
    long long ans = x*a + y*a;
    if(b < 2*a){
      ans = min(x,y)*b + (max(x,y)-min(x,y))*a;
    }
    return ans;
  }
}

int main(){
  long long t, x, y, a, b;
  cin >> t;
  while(t-->0){
    cin >> x >> y >> a >> b;
    long long ans = minSteps(x, y, a, b);
    cout << ans << endl;
  }
  return 0;
}
