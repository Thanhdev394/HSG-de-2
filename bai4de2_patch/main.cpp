#include <bits/stdc++.h>

using namespace std;
string s;
int n,i=0, j=0;

int main()
{
    freopen("bai4.inp","r",stdin);
    freopen("bai4.out","w",stdout);
    cin >> n;
    cin >> s;
    while(i<n)
    {
        long long d=1;
        while(j+1<n && s[j]==s[j+1])
        {
            d++;
            j++;
        }
        cout << d << s[i];
        j++;
        i=j;
    }
    return 0;
}
