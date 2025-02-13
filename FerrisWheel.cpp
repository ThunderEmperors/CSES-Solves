#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n,x;
  cin >> n >> x;
  vector<int> weight(n);
  for(int i = 0; i < n; i++){
    cin >> weight[i];
  }

  sort(weight.begin(), weight.end());

  int count = 0;
  int leftptr = 0, rightptr = n-1;

  while(leftptr <= rightptr){
    if(leftptr == rightptr){
      count++;
      break;
    }
    if(weight[leftptr]+weight[rightptr] <= x){
      leftptr++;
      rightptr--;
      count++;
      continue;
    }
    rightptr--;
    count++;
    continue;
  
  }

  cout << count;


}