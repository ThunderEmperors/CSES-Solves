#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int calculateProducts(ll time, int n, ll t, vector<int>& k){
  int count = 0;
  for(int j = 0; j < n; j++){
    count += time / k[j];
    if(count >= t){
      break;
    }
  }
  return count;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  ll t;
  cin >> n >> t;
  vector<int> k(n);
  for(int i = 0; i < n; i++) cin >> k[i];
  
  int min_element = INT_MAX;
  for(int i = 0; i < n; i++){
    min_element = min(min_element, k[i]); 
  }
  
  ll max_time = min_element*t;

  ll lptr = 0, rptr = max_time;
  ll ans = 0;

  while(lptr<=rptr){
    ll middle_ele = (rptr + lptr)/2;
    ll curr_products = calculateProducts(middle_ele, n, t, k);
    if(curr_products >= t){
      ans = middle_ele;
      rptr = middle_ele-1;
    }
    else {
      lptr = middle_ele+1;
    }
  }

  cout << ans;


  

  


  return 0;
}