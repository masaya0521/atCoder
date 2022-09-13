#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int N, K;
    cin >> N >> K;
 
    vector<int> A(N, 0);
    vector<int> arr(N, 0);

    for(int i=0;i<N;i++){
        cin >> A[i];
    }
 
    int result = 0;
    for (auto a: A) {
        arr[a-1]++;
    }

    sort(arr.begin(), arr.end(), greater<int>());

    vector<int> arr1(K, 0);
    vector<int> arr2(N-K, 0);

    copy(arr.begin(), arr.begin()+K, arr1.begin());
    copy(arr.begin()+K, arr.begin()+N, arr2.begin());


    for(int i=0;i<arr2.size();i++){
        if(arr2[i] != 0){
            result += arr2[i];
        }
    }

    cout << result << endl;
 
    return 0;
}