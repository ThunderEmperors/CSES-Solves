#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> x(n);
  for(int i = 0; i < n; i++) cin >> x[i];

  sort(x.begin(), x.end());

  //Using the last_max variable we keep track of the highest element we can create using the previous sorted elements
  //If the next element in the sorted array is one larger than 1+last_max, then even if 0 is present in the previous elements
  // last_max+1 cannot be created and that wil be our answer
  ll last_max = 0;
  ll ans = -1;
  for(int i = 0; i < n; i++){
    if(x[i] > 1+last_max){
      ans = 1+last_max;
      break;
    }
    last_max = x[i] + last_max;
    
  }

  if(ans == -1){
    cout << last_max+1;
  } else {
    cout << ans;
  }

  return 0;
}