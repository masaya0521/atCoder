#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
 
using namespace std;
 
int main() {
    int N;
    cin >> N;
    map<string,int> S;

    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        S[s]++;
    }

    int num = 0;

    for (const auto& [k, v] : S) {
        num = max(num, v);
    }

    vector<string> ans;
    for (const auto& [k, v] : S) {
        if(num == v){
            ans.push_back(k);
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << endl;
    }
 
    return 0;
}