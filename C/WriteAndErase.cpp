#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
 
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string,int> A;

    for(int i=0;i<N;i++){
        string a;
        cin >> a;
        if(A[a] == 0){
            A[a]++;
        }else{
            A[a] -= 1;
        }
    }

    int result = 0;
    for (const auto& [k, v] : A) {
        if(v > 0){
            result++;
        }
    }

    cout << result << endl;
}