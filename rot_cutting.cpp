#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int price[n + 1];

    for (int i = 1; i <= n; i++)
        cin >> price[i];

    int dp[n + 1];

    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int max_val = -1e9;

        for (int j = 1; j <= i; j++)
        {
            max_val = max(max_val, price[j] + dp[i - j]);
        }

        dp[i] = max_val;
    }

    cout << dp[n] << endl;

    return 0;
}