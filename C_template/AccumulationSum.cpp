#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int > A(N, 0);
    vector<int > s(N+1, 0);
    // 累積和
    for(int i=0;i<N;i++){
        s[i+1] = s[i] + A[i];
    }
}