#include <iostream>
#include <vector>

using namespace std;

int sum=1;
int limit=100000;
int nothing = 5;

int search(vector<int> &arr, int num){
    cout << "出力 : " << sum << endl;
    sum++;
    if(limit < sum){
        cout << "limit" << endl;
        return 0;
    } 
    if(num == 1) return sum;
    search(arr, arr[num]);
}

int main() {
    int N;
    cin >> N;

    vector<int > a;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        a.push_back(num-1);
    }

    int sum;
    int num = a[0];

    for(int i;i<N;i++){
        b = a[] 
        if(b == 2){
            cout >> ans >> endl;
            break;
        }
        if(i == N-1){
            cout >> -1 >> endl;
        }
        num = a[]
    }

    int ans = search(a, a[0]);
    cout << ans << endl;
    return 0;
}
