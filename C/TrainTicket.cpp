#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = int(s[0]-'0');
    int b = int(s[1]-'0');
    int c = int(s[2]-'0');
    int d = int(s[3]-'0');

    int sum = 0;
    bool isSeven = false;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                if(isSeven) continue;

                sum = a;
                string op1 = "+";
                string op2 = "+";
                string op3 = "+";
                if(i == 0){
                    sum += b;
                }else{
                    sum -= b;
                    op1 = "-"; 
                }
                if(j == 0){
                    sum += c;
                }else{
                    sum -= c;
                    op2 = "-"; 
                }
                if(k == 0){
                    sum += d;
                }else{
                    sum -= d;
                    op3 = "-"; 
                }

                if(sum == 7){
                    cout << a << op1 << b << op2 << c << op3 << d << "=7" << endl;
                    isSeven = true;
                }
                
            }
        }
    }
    return 0;
}