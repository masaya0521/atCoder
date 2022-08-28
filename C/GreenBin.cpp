#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, long> num;  
    for (int i = 0; i < N; ++i){
        string s;
        cin >> s;

        // 文字列のそーと
        sort(s.begin(), s.end());

        // インクリメント
        num[s]++;
    } 

    // 集計
    long long result = 0;
    for (auto v: num){
        long long n = v.second;

        // nC2の組み合わせを感げえる
        result += n  * ( n-1 ) / 2;        
    }

    cout << result << endl;
}