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
    int n, r, c;
    cin >> n >> r >> c;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;
    vector<int> row;
    vector<int> col;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= r)
            row.push_back(v[i]);
        if (v[i] <= c)
            col.push_back(v[i]);
    }
    sort(row.begin(), row.end());
    sort(col.begin(), col.end());
    int ans = 0;
    
    int temp = min(row.size(), col.size());
    if(temp > n / 2)
    {
        cout << n / 2 << endl;
    }
    else
    {
        if(temp % 2 != 0) cout << (temp - 1) << endl;
        else cout << temp << endl;
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