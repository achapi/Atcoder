/**
  date : 2021年11月25日23時52分54秒
  author : achapi
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define co(x) cout<<(x)<<endl
int wa(int n){
   if(n < 10) return n;
   return wa(n/10) + n%10;
}
int main() {
  cin.tie(0);cout.tie(0);
  ios_base::sync_with_stdio(false);
  //code start
  int n,a,b;cin>>n>>a>>b;
  int ans = 0;
  rep(i, n){
      int I = wa(i+1);
      if(a<=I && b>=I)ans += i+1;
  }
  co(ans);
  //code end
  return 0;
}