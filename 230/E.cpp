#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n,ans=0;cin>>n;
  ll k=sqrt(n);
  for(int i=1;i<=k;++i)ans+=n/i;
  cout<<(ans*2-k*k)<<'\n';
  return 0;
}