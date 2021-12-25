/**
  date : 2021年12月25日21時21分27秒
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
    unsigned long long n,x,l,aa=0,ans=0;cin>>n>>x;
    cin>>l;
    vector<unsigned long long> a(l);
    vector<unsigned long long> b(0);
    rep(i, l)cin>>a[i];
    rep(i, n-1){
        cin>>l;
        b={};
        rep(j, l){
            int ij;cin>>ij;
            rep(k, a.size()){
                if(a[k]*ij<=x)b.push_back(a[k]*ij);
            }
        }
        a=b;
    }
    rep(i, b.size()){
        if(b[i]==x)ans++;
    }
    cout<<ans;
    //code end
    return 0;
}