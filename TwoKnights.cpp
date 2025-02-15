#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for(int i = 1; i <= n; i++){
    long one = ((long) i * i * (i * i - 1)) / 2;
    long two = 4 * (i - 1) * (i - 2);
    cout << one - two << endl;
  }


  return 0;
}