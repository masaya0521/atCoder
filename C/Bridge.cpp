#include <iostream>
#include <vector>
using namespace std;

int timer;
vector<int>vis(10005), in(10005), low(10005);
 
int cnt = 0;
void dfs(int node, int pos, vector<vector<int> > &graph){
    vis[node] = 1;
    low[node] = in[node] = timer;
    timer++;
 
    for(int next_pos : graph[node]){
        if(next_pos == pos) continue;
        if(vis[next_pos])
        {
            low[node] = min(in[next_pos], low[node]);
        }
        else
        {
            dfs(next_pos, node, graph);
            if(in[node] < low[next_pos]) cnt ++;
            low[node] = min(low[node], low[next_pos]);
        }
    }
}
 
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int> > graph(n);
    for(int i = 0; i < m; i++){
        int a,b; 
        cin >> a >> b; 
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(0, 0, graph);
    cout << cnt << endl;

}
 