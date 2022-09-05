#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std; 

int main() {
    int K, S;
    cin >> K >> S;

    int sum = 0;
    for(int x=0; x<=K; x++){
        for(int y=0; y<=K; y++){
            int z = S - x - y;
            if(z < 0) continue;
            if(z > K) continue;
            if(3*K < S)  continue;
            sum++;
        }
    }
    cout << sum << endl;
}