#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> sticks(n);
  for(int i = 0; i < n; i++) cin >> sticks[i];

  sort(sticks.begin(), sticks.end());

//simple enough, sort them, find the costs as compared to the middle one
  if(n%2 == 0){
    int mid1 = sticks[n/2-1];
    int mid2 = sticks[n/2];
    ll count1 = 0;
    ll count2 = 0;
    for(int i = 0; i < n; i++){
      if(i != n/2-1){
        count1 += abs(sticks[i] - mid1);
      }
    }

    for(int i = 0; i < n; i++){
      if(i != n/2){
        count2 += abs(sticks[i] - mid2);
      }
    }

    cout << min(count1, count2) << endl;

  }
  else {
    int mid = sticks[n/2];
    ll count = 0;
    for(int i = 0; i < n; i++){
      if(i != n/2){
        count += abs(sticks[i] - mid);
      }
    }
    
    cout << count << endl;
  }


  return 0;
}