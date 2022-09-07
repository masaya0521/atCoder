#include <iostream>
#include <set>
using namespace std;
 
int main() {
 
	int N; string S; cin >> N >> S;
	int ans = 0;
 
	for (int i = 0; i < N; i++) {
 
		int cnt = 0;
		for (char c='a'; c <= 'z'; c++) {
 
			bool left = false, right = false;
			for (int n = 0; n <= i; n++) {
				if (S[n] == c)
					left = true;
			}
 
			for (int m = i+1; m < N; m++) {
				if (S[m] == c)
					right = true;
			}
 
			cnt += (left == true && right == true);
 
		}
 
		ans = max(ans, cnt);
	
	}
 
	cout << ans;
	//while (1) {}
	return 0;
 
}