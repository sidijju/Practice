#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  unordered_map<string, int> map;
  map["Tetrahedron"] = 4;
  map["Cube"] = 6;
  map["Octahedron"] = 8;
  map["Dodecahedron"] = 12;
  map["Icosahedron"] = 20;
  int n, ans = 0; cin >> n;
  string str;
  while(n-->0){
    cin >> str;
    ans += map[str];
  }
  cout << ans << endl;
  return 0;
}
