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
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl

void solve()
{
    int x, y; cin >> x >> y;
    int mn = 0;
    if(y == 0)
    {
        if(x % 3 == 0) yes;
        else no; return;
    }
    if(y > 0)
    {
        x -= y * 2;
    }
    else
    {
        x -= 4 * abs(y);
    }
    if(x < 0 || x % 3 != 0) no;
    else yes;
    
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