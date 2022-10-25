#include <iostream>
#include <vector>

using namespace std;
 
vector<bool> seen;
void dfs(int pos, vector<vector<int>> &graph){
    seen[pos] = true;
    for(auto next_pos: graph[pos]){
        if(seen[next_pos] == false) dfs(next_pos, graph);
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
        dfs(i, graph);
        for(int j = 0; j < n; j++) ans += (seen[j] == true);
    }
 
    cout << ans << endl;
}