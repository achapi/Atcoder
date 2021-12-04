#include <bits/stdc++.h>
int main(){long long n,k,a=0,i=1;std::cin>>n;k=std::sqrt(n);for(;i<=k;i++)a+=n/i;std::cout<<a*2-k*k<<'\n';return 0;}