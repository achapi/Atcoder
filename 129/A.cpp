/**
  date : 2021年11月21日21時01分03秒
  author : achapi
*/
#include <bits/stdc++.h>
#include <bitset>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
#define endl '\n'
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<endl
string binary(ll bina){
    int ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return to_string(ans);
}
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  ll n,l,r;cin>>n>>l>>r;
  bitset<100> N (binary(n));
  ll ans = 0;
  for (ll i = l; i <= r; i++){
      bitset<100> I (binary(i));
      bitset<100> IN (I^N);
      unsigned long in = IN.to_ulong();
      if(in<n)ans++;
  }
  co(ans);
  
  //code end
  return 0;
}