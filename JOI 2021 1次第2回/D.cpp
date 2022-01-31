/**
  date : 2022年01月10日18時59分47秒
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
    int n,a;cin>>n;vector<int> b(2000);
    rep(i, n){
        cin>>a;
        b[a-1]++;
    }
    int ans,min=100000;
    rep(i, 2000){
        if(b[i]<min&&b[i]!=0){
            ans=i+1;
            min=b[i];
        }
    }
    cout<<ans;
    //code end
    return 0;
}