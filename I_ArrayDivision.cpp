#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 10e9+7;

bool isPossible(vector<ll>& x, ll max_sum, ll k){
  //Checks if maximum of sums of subarrays is possible to be less than max_sum in less than or equal to k divisions
  ll sum = 0;
  ll divisions = 0;
  for(int i = 0; i < x.size(); i++){
    if(x[i] > max_sum) return false;
    if(sum + x[i] > max_sum){
      divisions++;
      sum = 0;
      
    }
    sum += x[i];
  }
  if(sum > 0) divisions++;
  return divisions <= k;
  
}

int main(){

  ll n, k;
  cin >> n >> k;

  vector<ll> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  ll arrSum = 0;
  for(int i = 0; i < n; i++) arrSum += x[i];

  ll l = 0, r = arrSum;
  ll ans = LLONG_MAX;
  while(l<r){
    ll mid = (l+r)/2;
    if(isPossible(x, mid, k)){
      r = mid;
      ans = min(ans, mid);
    }else{
      l = mid+1;
    }

  }

  cout << l;


  return 0;
}