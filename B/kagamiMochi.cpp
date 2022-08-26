#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int d[100];    
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> d[i];

    int tmp = 101;
    int sum= 0;
    int arr[N];
    int index = 0;


    for(int i=0;i<N;i++){
        if (tmp > d[i]){
            tmp = d[i];
            sum++;
        } else {
            tmp = d[i];
            arr[index] = sum;
            sum = 0;
            index++;
        }
    }

    int out = 0;
    for(int i=0;i<N;i++){
        if(arr[i] > out){
            out = arr[i];
        }
    }

        cout << out << endl;

}