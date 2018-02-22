#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
#define all(c) c.begin(), c.end()

int solution(vector<int> &A) {
	vector<int> counter(A.size());
	for (int i = 0; i < A.size(); i++) {
		if (A[i] < 1 || A[i] > A.size()) {
			return 0;
		} else if (counter[A[i] - 1] == 1) {
			return 0;
		} else {
			counter[A[i] - 1] = 1;
		}
	}
	return 1;
}
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	cout << solution(v);
	return 0;
}
