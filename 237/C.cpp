/**
  date : 2022年01月30日21時18分38秒
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
    string s;cin>>s;
    int a=s.size();
    int b=a;
    if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin())){
        cout<<"Yes";
        return 0;
    }
    while(a--){
        if(s[a]!='a'){
            s.erase(a+1);
            if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin())){
                cout<<"Yes";
                return 0;
            }
            break;
        }
    }
    rep(i, b-a-1){
        if(s[i]!='a'){
            s.erase(0,i);
            if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin())){
                cout<<"Yes";
                return 0;
            }
            break;
        }
    }
    cout<<"No";
    //code end
    return 0;
}