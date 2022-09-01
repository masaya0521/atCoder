#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std; 

int main() {
    int N,M;
    cin >> N >> M ;

    int s[M];
    int c[M];
    for(int i=0;i<  sizeof(s) / sizeof(int);i++){
        cin >> s[i] >> c[M];
    }

    for(int i=1;i<=1000;i++){
        int tmp = 0;
        for(int j=1;j<=N;j++){
             tmp = i % pow(10,i);
             if(tmp == c[i-1]){

             }
        }
    }
}