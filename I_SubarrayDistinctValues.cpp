#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mod = 10e9+7;


int main(){

  ll n, k;
  cin >> n >> k;
  vector<ll> x(n);
  for(int i = 0; i < n;i ++) cin >> x[i];

  map<ll,ll> freq;
  ll l = 0, r = 0, cnt = 0;
  while(r < n){ 
    freq[x[r]]++;
    if(freq.size() <= k){
      
      cnt += r-l+1;
      r++;
    } 
    else{
      freq[x[l]]--;
      if(freq[x[l]] == 0){ freq.erase(x[l]); }
      l++;
      freq[x[r]]--;
      if(freq[x[r]] == 0){ freq.erase(x[r]); }
      
    }
  }

  cout << cnt << endl;




}