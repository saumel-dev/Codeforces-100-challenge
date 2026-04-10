#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define mem(a, b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl

void solve()
{
    int n, x, s;
    cin >> n >> s >> x;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    int sum = accumulate(v.begin(), v.end(), 0);

    if (sum == s)
    {
        yes;
    }
    else if (sum <= s)
    {
        s -= sum;
        if (s % x == 0)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    else
    {
        no;
    }
}
int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}