#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  vector<string> a = {"0","1"};
  for(int i = 1; i < n; i++){
    int size = pow(2,i);
    for(int j = 0; j < size; j++){
      a.push_back(a[size-j-1]);
    }
    for(int j = 0; j < size; j++){
      a[j] = "0" + a[j];
    }
    for(int j = size; j < size*2; j++){
      a[j] = "1" + a[j];
    }
  }
  for(int i = 0; i < a.size(); i++){
    cout << a[i] << endl;
  }

}