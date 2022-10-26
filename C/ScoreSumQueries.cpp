#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int > C(N, 0);
    vector<int > score(N, 0);
    for(int i=0; i<N ;i++){
        cin >> C[i] >> score[i];
    }

    vector<int > C1(N+1, 0);
    vector<int > C2(N+1, 0);
    int cnt1 = 0;
    int cnt2 = 0;
    C1[0] = 0;
    C2[0] = 0;
    for(int i=0; i<N; i++){
        if(C[i] == 1){
            cnt1 += score[i];
            C1[i+1] = cnt1;
            C2[i+1] = cnt2;
        }else{
            cnt2 += score[i];
            C2[i+1] = cnt2;
            C1[i+1] = cnt1;
        }
        //cout << C2[i] << endl;
    }

    int Q;
    cin >> Q;
    vector<int > ans1;
    vector<int > ans2;
    for(int i=0; i<Q; i++){
        int l, r;
        cin >> l >> r;
        ans1.push_back(C1[r] - C1[l-1]);
        ans2.push_back(C2[r] - C2[l-1]);
    }


    for(int i=0; i<Q; i++){
        cout << ans1[i] << " " << ans2[i] << endl;
    }
}