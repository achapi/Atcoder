/**
  date : 2021年12月27日22時33分13秒
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
    string x;cin>>x;
    int size=x.size();
    vector<int> ans;
    int s=0;rep(i, size)s+=(x[i]-'0');
    int k=0;
    while(s!=0||k!=0){
        size--;
        ans.push_back((s+k)%10);
        k=(s+k)/10;
        if(size>=0)s-=(x[size]-'0');
    }
    int a = ans.size();
    while(a--){
        cout<<ans[a];
    }
    //code end
    return 0;
}