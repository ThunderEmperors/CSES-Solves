#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  string a;
  cin >> a;
  
  vector<int> chars(26, 0);
  int oddCount = 0;
  int oddInd = -1;
 
  for (char c : a) {
    chars[c - 'A']++;
  }
 
  for (int i = 0; i < 26; i++) {
    if (chars[i] % 2 != 0) {
      oddCount += 1;
      oddInd = i;
    }
  }

  if (oddCount > 1) {
    cout << "NO SOLUTION";
    return 0;
  } else {
    for (int i = 0; i < 26; i++) {
      if (chars[i] % 2 == 0) {
        for (int j = 0; j < chars[i] / 2; j++) {
          cout << (char)(i + 'A');
        }
      }
    }
    if(oddInd != -1){
      for (int i = 0; i < chars[oddInd]; i++) {
        cout << (char)(oddInd + 'A');
      }
    }

    for (int i = 25; i >= 0; i--) {
      if (chars[i] % 2 == 0) {
        for (int j = 0; j < chars[i] / 2; j++) {
          cout << (char)(i + 'A');
        }
      }
    }
  }
  
}