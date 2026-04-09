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
#define check cout << "--" << endl


void solve()
{
    int n; 
    cin >> n;
    vector<int> v(n);
    int neg_one = 0;
    for(auto &u : v)
    {
        cin >> u;
        if(u == -1) neg_one++;
    }
    int cnt = 0, ans = 0;
    if(neg_one % 2 != 0) cnt++;
    for(int i = 0; i < n; i++)
    {
        if(cnt == 1 && v[i] == -1)
        {
            ans += 2;
            cnt--;
        }
        if(v[i] == 0) ans++;
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