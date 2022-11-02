#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long N,K;
    cin >> N >> K;

    vector<long long > A(N, 0);
    for(long long i=0;i<N;i++){
        cin >> A[i];
    }

    vector<long long > s(N+1, 0);
    // 累積和
    for(long long i=0;i<N;i++){
        s[i+1] = s[i] + A[i];
    }

    for(long long i=0;i<=N-K;i++){
        cout << s[i+K] - s[i] << endl;
    }
}