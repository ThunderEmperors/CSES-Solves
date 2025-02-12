#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mod 1000000007

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<string> grid(n);
  for(int i = 0; i < n; i++){
    cin >> grid[i];
  }

  vector<vector<int>> dp(n, vector<int>(n, 0));

  for(int i = 0; i < n; i++){
    if(grid[0][i] == '*'){
      break;
    }
    dp[0][i] = 1;
  }

  for(int i = 0; i < n; i++){
    if(grid[i][0] == '*'){
      break;
    }
    dp[i][0] = 1;
  }

  for(int i = 1; i < n; i++){
    for(int j = 1; j < n; j++){
      if(grid[i][j] == '*'){
        continue;
      }
      dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
    }
  }

  cout << dp[n-1][n-1];
}