#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
    cin>>n;
  	long long k;
  	cin>>k;
  	vector<int> arr(n+1);
    for( int i = 1 ; i <= n; i++ ) cin>>arr[i];
  	int LOG = 60;
    vector<vector<int> > up( n+1, vector<int> (LOG+1));
  	for( int i = 1 ; i <= n ; i++ ){
		up[i][0] = arr[i];
    }
  	for( int j = 1 ; j <= LOG ; j++ ){
    	for( int v = 1 ; v <= n ; v++ ) up[v][j] = up[ up[v][j-1] ][j-1];
    }
  	int ans = 1;
  	for( long long j = LOG ; j >= 0 ; j-- ){
      if( k&((long long)1<<j) ){
        ans = up[ans][j];
        // cout<<ans<<" "<<j<<endl;
      }
    }
  	cout<<ans<<endl;
  	return 0;
}