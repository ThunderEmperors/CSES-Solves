#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, x;
  cin >> n >> x;
  vector<pair<int,int>> a;
  for(int i = 0; i < n; i++){
    int inp;
    cin >> inp;
    a.push_back(make_pair(inp, i));
  }

  sort(a.begin(), a.end());

  bool found = false;
  for(int i = 0; i < n-2; i++){
    int curr_ele = a[i].first;
    int lptr = i+1, rptr = n-1;
    if(found){
      break;
    }
    while(lptr < rptr){
      if(curr_ele + a[lptr].first + a[rptr].first == x){
        found = true;
        cout << a[i].second+1 << " " << a[lptr].second+1 << " " << a[rptr].second+1;
        break;
      }
      if(curr_ele + a[lptr].first + a[rptr].first < x){
        lptr++;
      }
      else if(curr_ele + a[lptr].first + a[rptr].first > x){
        rptr--;
      }
    }
  }

  if(!found){
    cout << "IMPOSSIBLE";
  }
  
return 0;
}
