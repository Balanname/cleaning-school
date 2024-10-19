#include <iostream>

using namespace std;

long long power(int k, int a, int b, int info[], int count, int end) {

	int clean;
	if (count == 0) {
		return a;
	}
	else {
		clean = b * k * end;
	}
	return clean;
}

long long get_minimal_effort(int n, int k, int a, int b, int info[]) {

	int length = 1 << n;
	int mid, start1, start2, end1, end2, count = 0, count2 = 0;
	if (length >= 2) {
		mid = length / 2;
		start1 = 0;
		end1 = mid;
		start2 = mid + 1;
		end2 = length;
	}
	for (int i = 0; i < k; ++i) {
		if (info[i] >= start1 && info[i] <= end1)
			count++;
		else
			count2++;
	}

	int result1 = power(k, a, b, info, count, end1);
	int result2 = power(k, a, b, info, count2, end2);

	int total = result1 + result2;

	return 0;
}


int main(void) {


}