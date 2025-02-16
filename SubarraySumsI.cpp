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

  int count = 0;
  int lptr = 0;
  int rptr = -1;
  int sum = 0;
  while(rptr < n){
    while(rptr < n && sum < x){
      rptr++;
      sum += a[rptr];
    }
    while(lptr <= rptr && sum > x){
      sum -= a[lptr];
      lptr ++;
    }
    if(sum == x){
      count ++;
      sum -= a[lptr];
      lptr ++;
    }
  }

  cout << count;


return 0;
}
