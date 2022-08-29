#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int X;
    cin >> X;

    int ans = 1;
    for(int i=1; i<=X;i++){
        for(int j=2;j<=X;j++){
            int sov = pow(i,j);
            if(pow(i,j) <= X) {
                ans = max(ans,sov); 
            }
        }
    }

    cout << ans << endl;

    return 0;
}