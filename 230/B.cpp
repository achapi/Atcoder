/**
  date : 2021年12月03日21時14分35秒
  author : achapi
*/
#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
typedef long long ll;

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<'\n'
#define all(v) v.begin(), v.end()

int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  string s;cin>>s;
  string t1 = "oxxoxxoxxo";
  string t2 = "xxoxxoxxox";
  string t3 = "xoxxoxxoxx";
  if(t1.find(s) != string::npos){
      co("Yes");
      return 0;
  }
  if(t2.find(s) != string::npos){
      co("Yes");
      return 0;
  }
  if(t3.find(s) != string::npos){
      co("Yes");
      return 0;
  }
  co("No");
  //code end
  return 0;
}