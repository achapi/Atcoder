/**
  date : 2022年01月08日21時05分54秒
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
    vector<int> x(n);
    vector<int> y(n);
    rep(i, n){
        cin>>x[i]>>y[i];
    }
    int s,ans=0;
    rep(i, n){
        rep(j, n){
            s = (x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]);
            if(s>ans)ans = s;
        }
    }
    double a = s/100000000000;
    cout<<setprecision(20)<<s;
    //code end
    return 0;
}