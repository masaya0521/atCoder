#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
using namespace std;
int main() {
  int c[3][3];
  
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin >> c[i][j];
    }
  }
  
  int A[3];
  int B[3];
  int b0,b1,b2;
  
  for(int a0=0;a0<101;a0++) {
    for(int a1=0;a1<101;a1++){
      for(int a2=0;a2<101;a2++){
        b0 = c[0][0] - a0;
        b1 = c[0][1] - a0;
        b2 = c[0][2] - a0;
        A[0] = a0;
        A[1] = a1;
        A[2] = a2;
        B[0] = b0;
        B[1] = b1;
        B[2] = b2;
        
        bool ok = true;
        for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
            if(A[i] + B[j] != c[i][j]) {
              ok = false;
            }
          }
        }
        
        if(ok) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  
  cout << "No" << endl;
  
}