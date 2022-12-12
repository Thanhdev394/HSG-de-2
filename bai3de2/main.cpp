#include <bits/stdc++.h>

using namespace std;
const int N = 1e5+2;
int n, a[N];

int main()
{
    //freopen("bai3.inp","r",stdin);
    //freopen("bai3.out","w",stdout);
    cin >> n;
    for(int i = 1;i<=n;i++)
        cin >> a[i];
    int Max=0, i1 =-1;
    for(int i =1;i<=n;i++)
        {
            int Min = INT_MAX;
            for(int j=1;j<n;j++)
            {
                if(i==j)
                    break;
                if(i-1==j)
                {
                    if(i<n)
                        Min = min(Min,abs(a[i+1]-a[i-1]));
                }
                else
                    Min = min(Min,abs(a[j+1]-a[j]));
            }
        if(Min > Max)
        {
            Max = Min;
            i1 = i;
        }
    }
    for(int i =1;i<=n;i++)
    {
        if(i!=i1)
            cout << a[i] << " ";
    }
}
