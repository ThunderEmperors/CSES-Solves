#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  set<int> s;

  bool found = false;
  int ans = -1;
  for(int i = 0; i < n; i++){
    if(s.count(a[i])){
      found = true;
      ans = i;
      break;
    } else {
      s.insert(x - a[i]);
      continue;
    }
  }

  if(found){
    int index2 = -1;
    for(int i = 0; i < n; i++){
      if(a[i] == x - a[ans]){
        if(i == ans) continue;
        index2 = i;
      }
    }
    cout << index2+1 << " " << ans+1;
  }
  else {
    cout << "IMPOSSIBLE";
  }


  return 0;
}