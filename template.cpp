#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define gottaGoFast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

const int N = 2000000;

bool primes[N];
void sieve()
{
    for (int i = 1; i < N; i++) primes[i] = true;
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= N; j += i) primes[j] = false;
        }
    }
}

void solve()
{
}

signed main()
{
    gottaGoFast();
    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
}
