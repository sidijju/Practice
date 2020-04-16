#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  string str;
  cin >> str;
  int n = str.length();
  vector<int> v;
  for(int i = 0; i < n; i ++){
    if(isdigit(str.at(i))) v.push_back((int)(char)str.at(i) - 48);
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < v.size()-1; i++){
    cout << v[i] << "+";
  }
  cout << v[v.size()-1] << endl;
  return 0;
}
