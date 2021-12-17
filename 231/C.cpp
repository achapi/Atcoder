/**
  date : 2021年12月11日21時11分52秒
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
    int n,q,x,ans,max=0;cin>>n>>q;
    vector<int> a(n);
    rep(i, n){
        cin>>a[i];
        if(max<a[i])max=a[i];
    }
    rep(i, q){
        cin>>x;
        ans=0;
        if(max>=x)rep(j, n)if(a[j]>=x)ans++;
        cout<<ans<<endl;
    }
    //code end
    return 0;
}