#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

	int n,x;
	cin >> n >> x;

	vector<int> price(n), pages(n);

	for (int i = 0; i < n; i++){ 
    cin >> price[i]; 
  }

	for (int i = 0; i < n; i++){ 
    cin >> pages[i]; 
    }

	vector<vector<int>> dp(n+1, vector<int>(x+1));

	for (int i = 1; i <= n; i++) {
		int curr_spendings = price[i-1];
		int curr_page = pages[i - 1];
		for (int j = 1; j <= x; j++) {
			dp[i][j] = dp[i - 1][j];
			if (curr_spendings <= j) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - curr_spendings] + curr_page);
			}
		}
	}

	cout << dp[n][x] << '\n';

}