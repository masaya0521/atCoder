#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 頂点数と辺数
    int N, M, Q;
    cin >> N >> M;

    // 頂点数Nの無向グラフを定義
    vector<vector<int> > G(N);

    // M本の辺を受け取る
    for(int i = 0; i < M ; ++i){
        int u, v;
        cin >> u >> v;
        // 頂点番号を０にする
        --u;
        --v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<int> c(N);
    for(int i = 0; i < N ; ++i) {
        cin >> c[i];
    }

    vector<vector<int> > s;
    for(int i = 0; i < Q ; ++i) {
        int t, x;
        cin >> t >> x;

        // 頂点番号を０にする
        --x;

        if (t == 1){
            cout << c[x] << endl;
            for(auto&  v: G[x]){
                c[v] = c[x];
            }
        }
        else if (t == 2){
            cout << c[x] << endl;
            int y;
            cin >> y;

            c[x] = y;
        }
    }
 }