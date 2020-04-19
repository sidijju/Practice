#include <iostream>
#include <set>
using namespace std;

int main(){
  int k;
  set<int> st;
  for(int i = 0; i < 4; i ++){
    cin >> k;
    st.insert(k);
  }
  cout << 4 - st.size() << endl;
  return 0;
}
