#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
 
  map<ll,ll> prefixes;
  ll curr_sum = 0;
  ll count = 0;
  prefixes[0] = 1;
  for(int i = 0; i < n;i ++){
    curr_sum += a[i];

    // cout <<  "  curr_sum % n " << curr_sum % n << endl;
    if(curr_sum % n < 0){
      count+= prefixes[( n + curr_sum%n)];
      prefixes[n+curr_sum%n]++;
    }
    else{
      count += prefixes[(curr_sum % n)];
      prefixes[curr_sum%n]++;
    }
    
    
  }

  cout << count;
 
return 0;
}