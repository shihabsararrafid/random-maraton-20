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
    string str;
    cin >> str;
    int arr[27] = {0};
    int odd = 0;
    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i] - 'a']++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (arr[i] % 2 == 1)
            odd++;
    }
    if (odd % 2 == 1 || odd == 0)
        cout << "First" << endl;
    else if (odd % 2 == 0)
        cout << "Second" << endl;
    baperBariJa();
}