#include <iostream>
using namespace std;
#define rep(i,n)for(int i=0;i<n;i++)

int main() {
      int n;
  cin >>n;
  int d[110];

  for (int i = 0; i < n; ++i) cin >> d[i];
  
 //バケット法の回答
  int num[110]={-1};
  for(int i=0;i<n;i++){
    num[d[i]]++;//d[]に格納された値の場所が++される（1以上に）
  }
 
  int res=0;//答えを格納する変数
  for(int i=1;i<=100;i++){
    if(num[i]){
      res++;
    }
  }
  cout << res << endl;
}