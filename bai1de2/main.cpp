#include <bits/stdc++.h>

using namespace std;
long long n,i,s=0;
int main()
{
    freopen("bai1.inp","r",stdin);
    freopen("bai1.out","w",stdout);
    cin >> n;
    for(i=1;i<=n;i++)
        s+=pow(i-1,i);
    cout <<s;
    return 0;
}
