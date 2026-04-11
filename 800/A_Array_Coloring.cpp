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
    int n;
    cin >> n;
    vector<pair<int, char>> p;
    for(int i = 1; i <= n; i++)
    {
        int v; cin >> v;
        if(i % 2 != 0)
        {
            p.push_back({v, 'R'});
        }
        else
        {
            p.push_back({v, 'B'});
        }
    }
    char ch = 'B';
    sort(p.begin(), p.end());
    for(auto u : p)
    {
        if(u.first == 1)
        {
            ch = u.second;
            continue;
        }
        if(ch == u.second)""
        {
            no; return;
        }
        else
        {
            ch = u.second;
        }
    }
    yes;
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