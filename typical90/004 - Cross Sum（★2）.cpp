/**
  date : 2021年12月11日18時52分55秒
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
    vector<vector<ll>>a (h, vector<ll>(w));
    vector<ll> tate(w, 0);
    vector<ll> yoko(h, 0);
    rep(i, h){
        rep(j, w){
            cin>>a[i][j];
        }
    }
    rep(i, w){
        rep(j, h){
            tate[i]+=a[j][i];
        }
    }
    rep(i, h){
        rep(j, w){
            yoko[i]+=a[i][j];
        }
    }
    rep(i, h){
        rep(j, w){
            cout<<(yoko[i] + tate[j] - a[i][j])<<" ";
        }
        cout<<endl;
    }
    //code end
    return 0;
}