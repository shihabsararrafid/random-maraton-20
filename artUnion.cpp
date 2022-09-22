#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
using namespace std;
#define LetsGoCin()                   \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define li long
#define ll long long
#define ull unsigned long long
#define baperBariJa() return 0
#define prntl(a) cout << a << endl
#define nl cout << endl
#define lp1(i, n) for (int i = 1; i <= n; i++)
#define lp2(i, n) for (int i = 0; i < n; i++)
#define prnt(a) cout << a
int main()
{
    LetsGoCin();
    int m, n;
    cin >> m >> n;
    vector<vector<int>> paint(m + 1, vector<int>(n + 1));
    vector<vector<int>> ans(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> paint[i][j];
        }
    }
    ans[1][1] = paint[1][1];
    for (int i = 2; i <= m; i++)
    {
        ans[1][i] = paint[i][1] + ans[1][i - 1];
    }
    for (int j = 2; j <= n; j++)
    {
        ans[j][1] = ans[j - 1][1] + paint[1][j];
        for (int k = 2; k <= m; k++)
        {
            int tmp = max(ans[j][k - 1], ans[j - 1][k]);
            ans[j][k] = paint[k][j] + tmp;
        }
    }
    for (int i = 1; i <= m; i++)
        cout << ans[n][i] << " ";
    cout << endl;
    baperBariJa();
}