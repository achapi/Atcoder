/**
  date : 2022年01月23日21時20分51秒
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
    int n;cin>>n;
    vector<vector<ll>> a(100,vector<ll>(100));
    int skip=0;
    rep(i, 2*n-1){
        rep(j, 2*n-1-skip){
            cin>>a[i+1][j+2+skip];
        }
        skip++;
    }
    skip=0;
    ll ans;
    vector<ll> s((n*2)*((n*2)-1)/2);
    if(n==1)cout<<a[1][2];
    if(n==2){
        s[0]=a[1][2]^a[3][4];
        s[1]=a[1][3]^a[2][4];
        s[2]=a[1][4]^a[2][3];
        cout<<*max_element(all(s));
    }
    //code end
    return 0;
}