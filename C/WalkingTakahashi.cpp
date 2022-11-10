#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

bool isMovePlus(int d, int x){
    return x + d < x - d; 
}

int main() {
    long long x, k, d;
    cin >> x >> k >> d;

    long long ans = x;
    for(long long i=0;i<k;i++){
        // 正負の移動判定
        if(abs(ans+d) < abs(ans-d)){
            if(ans < ans+d)
            ans = ans + d;
            // cout << ans << endl;
        } else {
            ans = ans - d;
            // cout << ans << endl;
        }
    }

    cout << ans << endl;
}
