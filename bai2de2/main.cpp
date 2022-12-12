#include <bits/stdc++.h>

using namespace std;
long long n;
bool songuyento(int n)
{
    if(n<2)
    {
        return false;
    }
    else if(n>2)
    {
        if(n%2==0)
        {
            return false;
        }
        for(int i = 3; i<=float(n/2);i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    //freopen("bai2.inp","r",stdin);
    //freopen("bai2.out","w",stdout);
    cin >> n;
    if(songuyento(n) == true)
        cout << "true";
    else cout << "false";
    return 0;
}
