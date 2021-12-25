/**
  date : 2021年12月25日21時52分40秒
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
    int n,k,x=0,ans=0,s=0;cin>>n>>k;
    map<long,int> c;
    c[k]=1;
    while(n--)cin>>x,ans+=c[s+=x]++;
    cout<<ans;
    //code end
    return 0;
}