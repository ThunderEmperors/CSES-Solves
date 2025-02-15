#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  //ulta pair lenge, <finish, start>
  set< pair<int, int> > movies;
  int x,y;
  for(int i = 0; i < n; i++){
    cin >> x >> y;
    movies.insert(make_pair(y,x));
  }

  int count = 0;
  int curr_time = 0;
  //ending time se sort karo, aur take greedy approach
  for(auto it=movies.begin(); it != movies.end(); it++){
    if(it->second >= curr_time){
      //agar next movie ka starting time is after curr time then vo movie we can watch and then current time becomes end time of that movie
      count++;
      curr_time = it->first;
      continue;
    }
  }

  cout << count << endl;


  return 0;
}