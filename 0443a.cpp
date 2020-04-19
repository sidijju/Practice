#include <iostream>
#include <set>
using namespace std;

int main(){
  string str;
  set<char> st;
  int count = 0;
  getline(cin, str);
  for(int i = 1; i < str.length(); i++){
    if(str.at(i)=='}') break;
    if(!(str.at(i)==','||str.at(i)==' ')){
      st.insert(str.at(i));
    }
  }
  cout << st.size() << endl;
  return 0;
}
