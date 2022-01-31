/**
  date : 2022年01月25日22時44分29秒
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
    vector<int> a(n);
    int s=0;
    rep(i, n){
        cin>>a[i];
        s+=a[i];
    }
    s-=*max_element(all(a));
    s-=*min_element(all(a));
    cout<<s;
    //code end
    return 0;
}