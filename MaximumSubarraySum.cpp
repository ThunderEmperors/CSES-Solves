#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x[200005];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<ll> x(n);

  for(int i =0; i<n; i++) cin >> x[i];

  ll max_sum = x[0];
  ll curr_sum = 0;
  for(int i = 0; i < n; i++){
    curr_sum += x[i];
    max_sum = max(max_sum, curr_sum);

    if(curr_sum<0){
      curr_sum = 0;
    }
    
  }

  cout << max_sum;

  return 0;
}