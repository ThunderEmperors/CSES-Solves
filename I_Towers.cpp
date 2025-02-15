#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> k(n);
  for(int i = 0; i < n; i++) cin >> k[i];
  

  //We have a multiset, if we counter a block that cannnot we placed in any of the existing towers, we create a new tower
  //If a block can be put on top of any of the towers, we choose the one which has the least area block that this block can be placed upon
  //Each element in the set represents a tower and the area of the top block of that tower
  multiset<int> s;
  int count = 0;
  for(int i = 0; i < n; i++){
    auto just_bigger = s.upper_bound(k[i]);
    if(just_bigger == s.end()){
      s.insert(k[i]);
      count++;
      continue;
    }
    s.erase(just_bigger);
    s.insert(k[i]);

  }
  cout << count << endl;

  return 0;
}