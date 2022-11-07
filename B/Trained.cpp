#include <iostream>
#include <vector>

using namespace std;

int sum=0;
int limit=100000;
int nothing = 5;

void search(vector<int> &arr, int num){
    sum++;
    if(limit < sum){
        cout << -1 << endl;
        return;
    } 
    if(num == 1) {
        cout << sum << endl;
        return;
    }
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

    search(a, a[0]);
    return 0;
}
