#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checkValidity(int row, int col, int n, int m){
  if(row >= n || row < 0){ return false; }
  if(col >= m || col < 0){ return false; }
  return true;
}

void dfs(int row, int col, vector<string>& map, vector<vector<int>>& visited, vector<vector<int>>& directions, int n, int m){
  visited[row][col] = 1;
  for(auto dir : directions){
    if(checkValidity(row+dir[0], col+dir[1], n, m) && map[row+dir[0]][col+dir[1]] == '.' && visited[row+dir[0]][col+dir[1]] == 0){
      dfs(row+dir[0], col+dir[1], map, visited, directions, n, m);
    }
  }
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int n, m;
  cin >> n >> m;
  vector<string> map(n);
  vector<vector<int>> visited(n, vector<int> (m, 0));
  vector<vector<int>> directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
  for(int i = 0; i < n; i++) cin >> map[i];

  int count = 0;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(map[i][j] == '#' || visited[i][j]) continue;
      else{
        count++;
        dfs(i, j, map, visited, directions, n, m);
      }

    }
  }
  cout << count << endl;


return 0;
}