#include <iostream>
#include <vector>

using namespace std;

vector<int> col;
vector<bool> seen;

void dfs(int pos, , int cur, vector<vector<int>> &graph){
    col[pos] = cur;
    for(auto next_pos: graph[pos]){
        if(col[next_pos] == -1) dfs(next_pos, 1-cur, graph);
    }
}
 
int main(){

    int n,m;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    for(int i = 0; i < m; i++){
        int a,b; 
        cin >> a >> b; 
        a--; b--;
        graph[a].push_back(b);
    }
 
    seen.resize(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) seen[j] = false;
        dfs(i, 0, graph);
        for(int j = 0; j < n; j++) ans += (seen[j] == true);
    }
 
    cout << ans << endl;
}