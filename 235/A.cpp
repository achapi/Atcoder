/**
  date : 2022年01月15日20時57分02秒
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
    int ans;
    string a;cin>>a;
    ans = stoi(a);
    swap(a[0],a[1]);
    swap(a[1],a[2]);
    ans+=stoi(a);
    swap(a[0],a[1]);
    swap(a[1],a[2]);
    ans+=stoi(a);
    cout<<ans;
    //code end
    return 0;
}