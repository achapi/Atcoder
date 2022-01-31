/**
  date : 2022年01月29日21時00分48秒
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
    ll n,l,w;cin>>n>>l>>w;
    vector<ll> a(n);
    ll ans=0;
    rep(i, n+1){
        if(i==n){
            if(a[i-1]+w<l){
                ans+=((l-a[i-1]-w)+w-1)/w;
            }
            break;
        }
        cin>>a[i];
        if(i==0){
            ans+=(a[i]+w-1)/w;
            continue;
        }
        if(a[i]-a[i-1]>w){
            ans+=((a[i]-a[i-1])+w-1)/w;
        }
    }
    cout<<ans;
    //code end
    return 0;
}