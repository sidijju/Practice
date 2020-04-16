#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, c;
  int sum = 0, curr = 0, num = 0;
  vector<int> v;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> c;
    v.push_back(c);
    sum += c;
  }
  sort(v.begin(), v.end());
  for(int i = n-1; i >= 0; i --){
    curr += v[i];
    sum -= v[i];
    num ++;
    if(curr > sum) break;
  }
  cout << num << endl;
}
