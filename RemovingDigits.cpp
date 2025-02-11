#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int count = 0;

  while(n){
    int temp = n;
    int curr_max = 0;
    while(temp){
      curr_max = max(curr_max, temp % 10);
      temp = temp/10;
    }
    n = n - curr_max;
    count += 1;
  }

  cout << count << endl;

}