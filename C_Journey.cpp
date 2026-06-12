#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005];

double dfs(int u, int p)
{
    double ans = 0;
    int cnt = 0;

    for(int v : g[u])
    {
        if(v == p) continue;

        ans += dfs(v, u);
        cnt++;
    }

    if(cnt == 0)
        return 0;

    return (ans / cnt) + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0;i<n-1;i++)
    {
        int u,v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    cout << fixed << setprecision(15) << dfs(1,0);

    return 0;
}