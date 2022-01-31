/**
  date : 2022年01月27日01時29分44秒
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
    int n,m;cin>>n>>m;
    vector<int> A(n);
    vector<int> V(n);
    int s=0,i=0,a,v;
    int flag=0;
    rep(j, n){
        if(flag==0){
            cin>>a>>v;
            if(cin.eof())break;
        }
        flag=0;
        s+=v;
        A[i]=a;V[i]=v;
        if(i!=0){
            if(a==A[i-1]){
                if(v>V[i-1]){
                    s-=V[i-1];
                    V[i-1]=v;
                    A[i-1]=a;
                    i--;
                }else{
                    s-=v;
                    i--;
                }
            }else{
                if(V[i]<0){
                    cin>>a>>v;
                    A[i]=a;V[i]=v;
                    flag=1;
                    if(A[i-1]!=A[i+1]){
                        s-=v;
                        i--;
                    }
                }
            }
        }else{
            if(V[0]<0){
                s-=v;
                i--;
            }
        }
        i++;
    }
    cout<<s;
    //code end
    return 0;
}