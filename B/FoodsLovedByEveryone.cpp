#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
 
    vector<int> A(100, 0);
 
    int result = 0;
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
 
        for (int j = 0; j < K; j++) {
            int a;
            cin >> a;
            A[a]++;
        }
    }
 
    for (auto a: A) {
        if (a == N) {
            result++;
        }
    }
 
    cout << result << endl;
 
    return 0;
}