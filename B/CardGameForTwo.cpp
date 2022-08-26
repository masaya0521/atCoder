#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int A[100];
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];
    sort(A, A+N, greater<int>());

    int alice[100];
    int bob[100];

}