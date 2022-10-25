#include <iostream>
#include <vector>

using namespace std;
using Graph = vector<vector<int> >;

void dfs(const Graph &G, int v, vector<bool> seen) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v, seen); // 再帰的に探索
    }
}

int main(){
    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    // 頂点数Nの無向グラフを定義
    Graph G(N);

    // M本の辺を受け取る
    for(int i = 0; i < M ; ++i){
        int u, v;
        cin >> u >> v;
        --u;
        --v;

        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<bool> seen;
    seen.assign(M, false);
    dfs(G, 0, seen);

    int bridge = 0;
    bool isBridge = false;
    // 幅優先探索するためのキューを定義
    vector<int> queue;
    for(auto& g: G){
        // cout << g.size() << endl;
        if(g.size() == 1){
            ++bridge;
        }else if(g.size() == 2){
            // 5 6 /n 6 5 と入力された場合、ノード配列に同じ辺が追加されるのでスルー
            if(g[0] == g[1]) {
                ++bridge;
                continue;
            }
            // 辺の数が2つの場合のみ橋かどうか判定する必要がある
            for(int i=0; i<g.size(); ++i){
                // cout << g[i] << endl;
                // ２つの辺のいずれかが、辺の数が１の場合該当ノードは橋である
                if(G[g[i]].size() == 1) {
                    isBridge = true;
                }
            }
            if(isBridge) ++bridge;
            isBridge = false;
        }
    }

    cout << bridge << endl;

    
    // グラフ内の配列確認
    int nodeNumber = 0;
    for(auto& g: G){
        cout << nodeNumber << " : ";
        for(int i=0; i<g.size() ; ++i){
            cout << g[i] << " ";
        }
        cout << endl;
        ++nodeNumber;
    }
    
 }