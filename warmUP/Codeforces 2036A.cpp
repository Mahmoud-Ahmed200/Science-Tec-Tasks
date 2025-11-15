#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int a, temp;
			bool isPerfect = true;
		for (int j = 0; j < n; j++) {
			cin >> a;
			if (j == 0) {
				temp = a;
				continue;
			}
			if (abs(temp-a)== 5 ||abs(temp-a)== 7) {
			temp = a;
				continue;
			}
			isPerfect = false;
		}
		cout<<(isPerfect ? "YES" : "NO")<<"\n";
	}
	return 0;
}