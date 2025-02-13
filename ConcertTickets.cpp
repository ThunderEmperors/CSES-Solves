#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  multiset<int> price;
  vector<int> customers;
  
  

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    price.insert(-tmp);
  }
  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    customers.push_back(tmp);
  }

  for(auto bid: customers) {
    const auto j = price.lower_bound(-bid);
    if (j == price.end()) {
      cout << -1 << std::endl;
    } 
    else {
      cout << -(*j) << std::endl;
      price.erase(j);
    }
  }
  return 0;
}