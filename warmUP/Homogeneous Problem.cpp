#include <iostream>
using namespace std;
 
int main() {
	long long x, y;
	cin >> x >> y;
	long long sum, evenSum, oddSum;
	sum = evenSum = oddSum = 0;
	for (long long i = min(x,y); i <= max(x,y); i++) {
		sum += i;
		i % 2 == 0 ? evenSum += i : oddSum += i;
	}
	cout <<sum << "\n" << evenSum << "\n" << oddSum;
	return 0;
}