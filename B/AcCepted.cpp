#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string s;

    cin >> s;
    int cCount = 0;
    bool isC = false;
    bool isChar = false;

    if(s[0] == 'A'){
        for(int i=2;i<s.size()-1;i++){
            if(s[i] == 'C') cCount++;
        }
        if(cCount == 1) isC = true;
    }

    return 0;

}