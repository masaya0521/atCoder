#include <iostream>
using namespace std;


int main() {
    int n,a,b;
    cin >> n >> a >> b;

    int sum = 0;
    int x =0;
    int y = 0;
    int  z = 0;

    for(int i=1;i<=n;i++){
        x = i % 10;
        if(i % 100 >= 10) y = i % 100 - x;
        if(i % 1000 >= 100) z = i % 1000 -x - 10 * y;
        int total = x + y + z;
        if(a <= total && b >= total) sum += total;
    }

    cout << sum << endl;
}