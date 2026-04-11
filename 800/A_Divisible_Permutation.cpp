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
    vector<int> ans;
    int temp = n, j = 0;
    if (n % 2 == 0)
    {
        for (int i = n; i >= 1; i--)
        {
            if (i == n)
            {
                ans.push_back(1);
                j++;
                continue;
            }
            if (i % 2 != 0)
            {
                ans.push_back(temp);
                j++;
                temp--;
            }
            else
            {
                ans.push_back(ans[j - 1] - i);
                j++;
            }
        }
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            if (i == n)
            {
                ans.push_back(1);
                j++;
                continue;
            }
            if (i % 2 == 0)
            {
                ans.push_back(temp);
                j++;
                temp--;
            }
            else
            {
                ans.push_back(ans[j - 1] - i);
                j++;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto u : ans)
        cout << u << " ";
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