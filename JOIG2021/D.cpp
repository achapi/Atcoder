/**
  date : 2022年01月25日23時41分55秒
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
    ll h,w;cin>>h>>w;
    int n;cin>>n;
    map<pair<ll,ll>,ll> m;
    rep(i, n){
        ll a,b;cin>>a>>b;
        for(int j=-1;j<2;j++){
            for(int k=-1;k<2;k++){
                if(a+j>1&&a+j<h && b+k>1&&b+k<w)
                m[{a+j,b+k}]++;
            }
        }
    }
    ll ans=0;
    for(auto i=m.begin();i!=m.end();i++){
        ans=max(i->second,ans);
    }
    cout<<ans;
    //code end
    return 0;
}