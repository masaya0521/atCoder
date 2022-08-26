#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n,sum;
  int x = -1;
  int y = -1;
  int z = -1;

  cin >> n >> sum;

  for(int i=0; i < n;i++){
      for(int j=0;j< n;j++){
          int k= n-i-j;

          if (k < 0 || k > n){
              continue;
          }
          
          if(10000 * i + 5000 * j + 1000 * k == sum){
            x = i;
            y = j;
            z = k;
             break; 
          }
      }
  }
  

  

  cout << x << " " << y << " " << z << endl; 

  return 0;
}