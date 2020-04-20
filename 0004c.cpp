#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  int n; cin >> n;
  unordered_map<string, int> mp;
  string str;
  while(n-->0){
    cin >> str;
    if(mp.count(str)){
      mp[str]++;
      cout << str+to_string(mp[str]) << endl;
    }
    else {
      mp.insert(make_pair(str, 0));
      cout << "OK" << endl;
    }
  }

  return 0;
}
