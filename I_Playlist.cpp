#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> k(n);
  for(int i = 0; i < n; i++) cin >> k[i];

  map<int, int> map;
  int max_len = 0;
  int curr_len = 0;

  //In the map we store the last time that we encountered a certain element
  // If that element is present in the map and it was encountered in the range that we are considerering of the current length
  // That means we have to update our current length as the current element has occured already in the subarray we are considering of our current length
  // If that element is not present in the map or was encountered before we have started counting for our cuurrent length
  // Then we can increase our length by one and update the last encountered index for the current element
  for(int i = 0; i < n; i++){
    if(map.count(k[i]) && i - map[k[i]] <= curr_len){
      
      curr_len = i - map[k[i]];
      map[k[i]] = i;
      continue;
    }
    curr_len += 1;
    max_len = max(max_len, curr_len);
    map[k[i]] = i;
  }

  cout << max_len << endl;


  return 0;
}