#include <iostream>
#include <set>
using namespace std;

int main(){
  int n; string str; cin >> n >> str;
  set<char> st;
  for(int i = 0; i < n; i ++){
    st.insert(tolower(str.at(i)));
  }
  if(st.size() == 26) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
