#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, k;
  cin >> n >> m >> k;
  vector<int> apartment_des(n);
  vector<int> apartment_size(m);

  for(int i = 0; i < n; i++){
    cin >> apartment_des[i];
  }

  for(int i = 0; i < m; i++){
    cin >> apartment_size[i];
  }

  sort(apartment_des.begin(), apartment_des.end());
  sort(apartment_size.begin(), apartment_size.end());

  int leftIndex = 0, rightIndex = 0, answer = 0;
  while(leftIndex < n && rightIndex < m) {
    if(abs(apartment_des[leftIndex]-apartment_size[rightIndex]) <= k) {
      answer += 1;
      leftIndex += 1;
      rightIndex += 1;
    }
    else if (apartment_des[leftIndex] < apartment_size[rightIndex]) {
      leftIndex += 1;
    }
    else {
      rightIndex += 1;
    }
  }

  cout << answer;
}