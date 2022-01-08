/**
  date : 2021年12月31日01時56分36秒
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
#define all(v) v.begin(), v.end()

int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    ll n,a,b,p,q,r,s;cin>>n>>a>>b>>p>>q>>r>>s;
    for(ll i=p;i<=q;i++)for(ll j=r;j<=s;j++)cout<<(abs(a-i)==abs(b-j)?'#':'.');cout<<endl;
    //code end
    return 0;
}