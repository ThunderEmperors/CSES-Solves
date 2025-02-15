#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int x, n;
  cin >> x >> n;
  
  //Set traffic lights in set and distances in multiset
  //After each new traffic light, delete distance in which that traffic light is
  //Insert the new distances in the multiset
  set<int> lights;
  lights.insert(0);
  lights.insert(x);
  multiset<int> distances;
  distances.insert(x);

  while(n--){
    int new_light;
    cin >> new_light;
    auto ptr = lights.upper_bound(new_light);
    int upper = *(ptr--);
    int lower = *ptr;
    auto i = distances.find(upper-lower);
    if(i != distances.end()){
      distances.erase(i);
    }
    lights.insert(new_light);
    distances.insert(upper-new_light);
    distances.insert(new_light-lower);
    cout << *prev(distances.end()) << " ";
  }



  return 0;
}