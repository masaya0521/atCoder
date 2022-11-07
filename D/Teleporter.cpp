#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> A;
    vector<int> visited(n, 0);
    vector<int> order;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        A.push_back(a-1);
    }

    int visit = 0;
    order.push_back(visit);
    int sum = 0;
    int start = 0; // loopのはまじ
    int loop = 0; // loopしてる最初の数字
    int loop_start = 0; // loopが開始したインデックス
    int loop_end = 0; // loopが終了したインデックス

    for(int i=0; i<k; i++){
        visited[visit]++; // 訪問した町の回数を覚えておく
        order.push_back(visit); // 訪問した町の証跡
        if(visited[visit] == 2){
            loop = visit; // loopしてる最後の要素
            loop_end = i; // loopしてるindexを取得
            break;
        }
        visit = A[visit]; // 次の町を格納
        sum++;
    }

    // cout << "loopした数字" << loop << endl; 

    for(int i=0; i<loop_end; i++){
        if(order[i] == loop){
            loop_start = i-1;
        }
    }
    
    // cout << "loopが開始した要素" << loop_start << endl;  
    // cout << "loopが終了した要素" << loop_end << endl;   

    int loop_index = loop_end - loop_start; // loopしてる要素数
    // cout << "loopしてる要素数" << loop_index << endl;
   
    int loop_before =  sum - loop_index; // loopに入る前の要素数
    // cout << "loopに入る前の要素数" << loop_before << endl;

    cout << A[(k-loop_before)%loop_index] << endl;

    return 0;
}