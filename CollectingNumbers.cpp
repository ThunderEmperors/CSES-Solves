#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[200005];
int indexes[200005];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    indexes[arr[i]] = i;
  } 

  int rounds = 0;
  for(int i = 1; i < n; i++){
    if(indexes[i+1] < indexes[i]){
      rounds++;
    }
  }

  cout << rounds+1 << endl;


  return 0;
}