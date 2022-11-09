#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    bool flag = false;
    for(int i=1; i <= 3;i++){
        if(a*b*i%2 == 1){
            flag = true;
        }
    }

    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}