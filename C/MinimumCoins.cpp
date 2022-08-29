#include <iostream>
#include <cmath>

using ll = long long;
using namespace std;

int main() {
    ll N;
    ll a,b,c;
    cin >> N;
    cin >> a >> b >> c;

    ll ans = 10000;

    for(ll i=0;i<=10000;i++){
        for(ll j=0;j<=10000;j++){
            ll tmp = a*i + b*j;
            if((N-tmp) % c != 0 ||  tmp > N) continue;
            
            ll k = (N - tmp) / c;
            ans = min(ans, i+j+k);
            
        }
    }

    cout << ans << endl;
}