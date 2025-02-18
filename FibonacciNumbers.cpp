#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll mod = 1e9+7;

void matrix_mul(ll mat1[2][2], ll mat2[2][2]){
  ll mat3[2][2];
  memset(mat3, 0, sizeof(mat3));
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      for(int k = 0; k < 2; k++){
        mat3[i][j] += (mat1[i][k] * mat2[k][j]);
        mat3[i][j] %= mod;
      }
    }
  }
  mat1[0][0] = mat3[0][0];
  mat1[0][1] = mat3[0][1];
  mat1[1][0] = mat3[1][0];
  mat1[1][1] = mat3[1][1];


}


int main(){

  ll n;
  cin >> n;
  
  ll fibo_mat[2][2], fibo_mat_second[2][2];
  memset(fibo_mat, 0, sizeof(fibo_mat));
  memset(fibo_mat_second, 0, sizeof(fibo_mat_second));
  fibo_mat[0][1] = fibo_mat[1][0] = fibo_mat[1][1] = fibo_mat_second[0][0] = fibo_mat_second[1][1] = 1;

  if(n == 0){
    cout << 0 << endl;
  } else if(n == 1) {
    cout << 1 << endl;
  } else {
    while(n){
      if(n&1){
        matrix_mul(fibo_mat_second, fibo_mat);
      }
      matrix_mul(fibo_mat, fibo_mat);
      n >>= 1;
    }
    cout << fibo_mat_second[0][1] << endl;
  }


}