#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    char s[300001];
    int sum1[300001],sum2[300001],ans=1e9;

    cin >> n >> s+1;


	for(int i=1;i<=n;i++){
		sum1[i]=sum1[i-1]+(s[i]=='W');
		//cout<<sum1[i]<<" ";
	}
	for(int i=n;i>=1;i--){
		sum2[i]=sum2[i+1]+(s[i]=='E');
	}
	for(int i=1;i<=n;i++){
		ans=min(sum1[i-1]+sum2[i+1],ans);
	}

	cout << ans;
}
