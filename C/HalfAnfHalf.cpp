#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
int main(){
    int A, B, C, X, Y;
 
    cin >> A >> B >> C >> X >> Y;
 
    int maxv = A*X + B*Y;
 
    for(int i = 0; i <= 100000; i++){
        int val = i*2*C + max(0, X-i)*A + max(0, Y-i)*B;
        if(val < maxv){
            maxv = val;
        }
    }
 
    cout << maxv << endl;
    return 0;
}
