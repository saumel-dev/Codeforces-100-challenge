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
    string s;
    cin >> s;
    if (s[0] == s[n - 1])
    {
        int block = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == s[i])
                continue;
            else
                block++;
        }
        cout << block<< endl;
    }
    else
    {
        int block = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] == s[i])
                continue;
            else
                block++;
        }
        if (block == n)
            cout << block << endl;
        else
            cout << block + 1 << endl;
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