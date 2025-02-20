#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  string s;
  cin >> s;
  set<string> uniques;
  sort(s.begin(), s.end());
  uniques.insert(s);
  while(next_permutation(s.begin(), s.end())){
    uniques.insert(s);
  }
  cout << uniques.size() << endl;
  for(auto itr : uniques){
    cout << itr<< endl;
  }


  return 0;  
}