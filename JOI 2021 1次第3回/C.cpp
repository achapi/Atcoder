/**
  date : 2022年01月11日01時46分59秒
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
    int n,k,r=0;string s;cin>>n>>k>>s;
    rep(i, n-1){
        if(s[i]=='R')r++;
    }
    if(r==k)cout<<'W';
    else cout<<'R';
    //code end
    return 0;
}