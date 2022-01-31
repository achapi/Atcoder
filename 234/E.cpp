/**
  date : 2022年01月15日01時51分44秒
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
    ll x;cin>>x;
    vector<ll> tosa;
    rep(i, 10)tosa.push_back(i);
    for(int i=1;i<=9;i++){
        for(int j=-9;j<=9;j++){
            ll a = i;
            int a1 = i;
            for(int k=0;k<18;k++){
                if(a1-j<=9&&a1-j>=0){
                    a=a*10+(a1-j);
                    a1=a1-j;
                    tosa.push_back(a);
                }else{
                    break;
                }
            }
        }
    }
    sort(all(tosa));
    cout<<*lower_bound(all(tosa),x);
    //code end
    return 0;
}