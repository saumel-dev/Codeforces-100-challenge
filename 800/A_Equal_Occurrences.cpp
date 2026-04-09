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
#define check cout << "yuhu" << endl

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> freq(101);
    for(int i = 1; i <= n; i++)
    {
        freq[v[i]]++;
    }
    ll ans = 0;
    for(int i = 1; i <= 100; i++)
    {
        int cnt = 0;
        for(int j = 1; j <= freq.size() - 1; j++)
        {
            if(freq[j] >= i && freq[j] != 0)
            {
                cnt += i;
            }
        }
        ans = max(ans, 1LL * cnt);
    }
    cout << ans << endl;
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