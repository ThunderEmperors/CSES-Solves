#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];

  map<ll,ll> prefixes;
  ll curr_sum = 0;
  ll count = 0;
  prefixes[0] = 1;
  for(int i = 0; i < n;i ++){
    curr_sum += a[i];

    count += prefixes[curr_sum-x];
    prefixes[curr_sum]++;
  }

  cout << count;
 
return 0;
}