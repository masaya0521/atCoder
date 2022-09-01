#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std; 

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    string X[N];
    string Y[N];
    int sum = 0;

    for(int i=1;i<N;i++){
        int tmp = 0;
        for(int j=0;j<i;j++){
            X[j] = S[j];
            Y[j] = S[j+i];
        }
        for(int j=0;j<N;j++){
            if(X[j] == Y[j]){
                tmp = 0;
            }
        }
    }
}