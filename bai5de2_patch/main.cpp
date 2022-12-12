#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 2;

int n, S, a[N], cnt[N];

int main() {
    cin >> n >> S;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    long long res = 0;
    for (int i = 1; i <= n; ++i) {
        if (S >= a[i]) res += cnt[S - a[i]];
        ++cnt[a[i]];
    }
    cout << res;
}


