/**
  date : 2022年01月10日18時33分27秒
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
    int n,m;cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    rep(i, n)cin>>a[i];
    rep(i, m)cin>>b[i];
    sort(all(a));sort(all(b));
    int ans = 0;
    rep(i, n){
        rep(j, m){
            if(a[i]==b[j]){
                ans++;
                break;
            }
        }
    }
    cout<<ans;
    //code end
    return 0;
}