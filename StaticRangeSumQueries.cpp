#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  vector<int> x(n);
  vector<ll> sums(n);
  for(int i = 0; i< n; i++){
    cin >> x[i];
    if(i > 0) sums[i] = sums[i-1] + x[i];
    else sums[0] = x[0];
  }

  while(q--){
    int a,b;
    cin >> a >> b;

    if(a > 1){
      cout << sums[b-1]-sums[a-2] << endl;
    } else{
      cout << sums[b-1] << endl;
    }
    
  }



  return 0;
}