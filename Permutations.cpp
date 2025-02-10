#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  if(n == 2 || n == 3){
    cout << "NO SOLUTION" << endl;
  } else {
    for(int i = 2; i <= n; i = i + 2){
      cout << i << " ";
    }
    for(int i = 1; i <= n; i = i + 2){
      cout << i << " ";
    }
  }
}