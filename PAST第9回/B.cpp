/**
  date : 2022年01月31日23時37分10秒
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
int oturi(int a){
    int x=0;
    a-=(a/500)*500;
    a-=(a/100)*100;
    x=a/50;
    a-=(a/50)*50;
    a-=(a/10)*10;
    x+=a/5;
    return x;
}
int main() {
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(false);
    //code start
    int n;cin>>n;
    int ans=0;
    rep(i, n){
        int a,b;cin>>a>>b;
        int c=b-a;
        ans+=oturi(c);
    }
    cout<<ans;
    //code end
    return 0;
}