/**
  date : 2022年01月22日22時13分48秒
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
    int h,w,k;cin>>h>>w>>k;
    vector<int> a(h);rep(i, h)cin>>a[i];
    vector<int> b(w);rep(i, w)cin>>b[i];
    int mw=((k-1)*h/k)*k;
    int mh=((k-1)*w/k)*k;
    int sh=0,sw=0;
    rep(i, h){
        if(mh+a[i]>(k-1)*w){
            sh+=(mh+a[i]-k);
        }else{
            sh+=(mh+a[i]);
        }
    }
    rep(i, w){
        if(mw+b[i]>(k-1)*h){
            sw+=(mw+b[i]-k);
        }else{
            sw+=(mw+b[i]);
        }
    }
    if(sh%k==sw%k){
        if(sh>sw){
            cout<<sw;
        }else{
            cout<<sh;
        }
        return 0;
    }
    cout<<-1;
    //code end
    return 0;
}