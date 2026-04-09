#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define nl cout << endl
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl


void solve()
{
    int n;
    cin >> n;
    if(n % 3 == 0 && n % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    if(n == 2)
    {
        cout << 2 << endl;
    }
    else if(n == 3)
    {
        cout << 3 << endl;
    }
    else if(n % 2 == 0)
    {
        cout << 0 << endl;
    }
    else cout << 1 << endl;

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