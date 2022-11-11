#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    long long x, k, d;
    cin >> x >> k >> d;

    x = abs(x);
    if(x/d > k){
        x -= k*d;
    cout<< x <<endl;
    return 0;
    }
    k -= x/d;
    x %= d;
    
    if(k%2 == 1) x=abs(x-d);

/*
    long long ans = x;
    for(long long i=0;i<k;i++){
        // 正負の移動判定
        if(abs(ans+d) < abs(ans-d)){
            ans = ans + d;
            // cout << ans << endl;
        } else {
            ans = ans - d;
            // cout << ans << endl;
        }
    }
    */

    cout << x << endl;
    return 0;
}
