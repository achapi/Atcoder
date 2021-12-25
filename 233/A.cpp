/**
  date : 2021年12月25日21時00分44秒
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
    int a,b,ans=0;cin>>a>>b;
    while(a<b){
        ans++;
        a+=10;
    }
    cout<<ans;
    //code end
    return 0;
}