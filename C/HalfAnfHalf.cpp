#include <algorithm>
using namespace std;
 
int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
 
  int ans = (1 << 30);
  int mh = max(X, Y) * 2;
  for (int h = 0; h <= mh; h+=2) {
    int a = max(0, X - h / 2);
    int b = max(0, Y - h / 2);
    int c = h;
    ans = min(ans, a * A + b * B + c * C);
  }