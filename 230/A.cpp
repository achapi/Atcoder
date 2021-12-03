/**
  date : 2021年12月03日21時02分31秒
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
  int n;cin>>n;
  if(n-10<0){
    co(("AGC00" + to_string(n)));
  }else if(n-100<=0 && n < 42){
    co(("AGC0" + to_string(n)));
  }else{
      n+=1;
    co(("AGC0" + to_string(n)));
  }
  //code end
  return 0;
}