#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll N = 1e6;
ll n,color[N+5],used[N+5],m;
vector<ll>p[N+5];
bool ok = 1;
void dfs(ll u)
{
    used[u] = 1;
    for(ll v:p[u])
    {
        if(!used[v])
        {
            color[v] = 3 - color[u];
            dfs(v);
        }
        else if(color[v] == color[u]) 
        {
            ok = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(ll i = 1;i <= n;i++) used[i] = 0;
    for(ll i = 1;i <= m;i++)
    {
        ll u,v;
        cin >> u >> v;
        p[u].push_back(v);
        p[v].push_back(u);
    }
    for(ll i = 1;i <= n;i++)
    {
        if(!used[i])
        {
            color[i] = 1;
            dfs(i);
        }
    }
    if(!ok) {cout << "IMPOSSIBLE";return 0;}
    for(ll i = 1;i <= n;i++) cout << color[i] << ' ';
}