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
    vector<int> v(n * 3 + 1, 0);
    int cnt = 0;
    for (int i = 1; i <= (n * 3); i += 3)
    {
        cnt++;
        v[i] = cnt;
    }
    for (int i = 1; i <= (n * 3); i++)
    {
        if (v[i] == 0)
        {
            cnt++;
            v[i] = cnt;
        }
    }
    for(int i = 1; i <= 3 * n; i++) cout << v[i] << " ";
    nl;
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