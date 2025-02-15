#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> ent(n), exit(n);
  for(int i = 0; i < n; i++){
    cin >> ent[i] >> exit[i];
  }

  sort(ent.begin(), ent.end());
  sort(exit.begin(), exit.end());

  int ptra = 0, ptrb = 0;
  int maxcount = 0;
  int count = 0;
  //ptra entry wali sorted array ko point karega aur ptrb exit wali
  //agar at certain point exit pehle ho raha hai toh uss time moment pe people inside the res ek kam ho jayenge
  // and if entry of next person is before the exit of someone toh people inside the res badh jayenge
  while(ptra != n){
    if(ent[ptra] < exit[ptrb]){
      count++;
      maxcount = max(maxcount, count);
      ptra++;
    }
    else if( ent[ptra] > exit[ptrb] ){
      count--;
      ptrb++;
    }
    else{
      ptra++;
      ptrb++;
    }
  }

  cout << maxcount << endl;


  return 0;
}