#include <bits/stdc++.h>
using namespace std;

int N, res = 1;
string S;

int main(){
  cin >> N >> S;
  for(int i = 1; i < N; i++){
    res += (S[i] != S[i - 1]);
  }
  cout << min(res + 2, N) << '\n';
}
