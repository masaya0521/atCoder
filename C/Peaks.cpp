#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 頂点数と辺数
    int N, M;
    cin >> N >> M;

    // 各標高の高さ
    vector<int> H(N);
    for(int i=0; i<N; ++i){
        cin >> h;
        H.push_back(h)
    }

    // 頂点数Nの無向グラフを定義
    vector<vector<int> > G(N);

    // M本の辺を受け取る
    for(int i = 0; i < M ; ++i){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
 }