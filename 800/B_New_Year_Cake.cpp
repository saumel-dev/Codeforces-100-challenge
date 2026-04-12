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
    int a, b;
    cin >> a >> b;
    int c = a, d = b;
    if (a == 1 || b == 1)
    {
        if (a == b)
            cout << 1 << endl;
        else
            cout << 2 << endl;
        return;
    }
    // case 1
    int i = 0, layer1 = 0;
    while(1)
    {
        if(a >= pow(2, i))
        {
            a -= pow(2, i); layer1++; i++;
        }
        else break;
        if(b >= pow(2, i))
        {
            b -= pow(2, i); layer1++; i++;
        }
        else break;

    }
    // case 2
    int j = 0, layer2 = 0;
    while(1)
    {
        if(d >= pow(2, j))
        {
            d -= pow(2, j); layer2++; j++;
        }
        else break;
        if(c >= pow(2, j))
        {
            c -= pow(2, j); layer2++; j++;
        }
        else break;

    }
    cout << max(layer1, layer2) << endl;
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