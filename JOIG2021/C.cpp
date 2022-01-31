/**
  date : 2022年01月25日23時23分39秒
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
    vector<int> s(n);
    int ans=0;
    rep(i, n){
        int x,y;cin>>x>>y;
        if(y==x+1){
            s[i]=ans;
            continue;
        }
        if(y==0){
            ans++;
            s[i]=ans;
            continue;
        }
        if(y<=s[i]-s[i-x+1])ans++;
        s[i]=ans;
    }
    cout<<ans;
    //code end
    return 0;
}