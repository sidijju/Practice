#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int t, n, k; cin >> t;
  while(t-->0){
    cin >> n >> k;
    vector<char> a;
    char l;
    for(int i = 0; i < n; i++){
      cin >> l;
      a.push_back(l);
    }
    sort(a.begin(), a.end());
    if(a[0]!=a[k-1]) cout << a[k-1];
    else if(a.size()>0){
      cout << a[0];
      if(a[k]==a[a.size()-1]){
        for(int i = 0; i < (n-1)/k; i ++){
          cout << a[a.size()-1];
        }
      }
      else {
        for(int i = k; i < n; i ++)
          cout << a[i];
      }
    }
    cout << endl;
  }
  return 0;
}
