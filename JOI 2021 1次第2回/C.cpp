/**
  date : 2022年01月10日18時55分45秒
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
    int n;string s;cin>>n>>s;
    rep(i, n-1){
        if(s[i+1]=='J')cout<<s[i]<<endl;
    }
    //code end
    return 0;
}