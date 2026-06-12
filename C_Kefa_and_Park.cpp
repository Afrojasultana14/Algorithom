#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005];
int cat[100005];

int n, m;
int ans = 0;

void dfs(int u, int p, int cnt)
{
    if(cat[u])
        cnt++;
    else
        cnt = 0;

    if(cnt > m)
        return;

    int child = 0;

    for(int v : g[u])
    {
        if(v == p)
            continue;

        child++;
        dfs(v, u, cnt);
    }

    
    if(child == 0)
        ans++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
        cin >> cat[i];

    for(int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0, 0);

    cout << ans << '\n';

    return 0;
}