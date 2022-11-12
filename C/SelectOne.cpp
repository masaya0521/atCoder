#include <iostream>
#include <vector>
#include <numeric>
#include <cstdlib>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> A,B;
    vector<int> altA(n, 0);
    for(int i=0;i<n;i++){
        int in;
        cin >> in;
        A.push_back(in);
    }
    for(int i=0;i<n;i++){
        int in;
        cin >> in;
        B.push_back(in);
    }

    int sumB = 0;
    for(int i; i<n;i++){
        sumB += abs(A[i] - B[i]);
    }

    if(k >= sumB && (abs(k%2) == abs(sumB%2))){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl; 
    }
}