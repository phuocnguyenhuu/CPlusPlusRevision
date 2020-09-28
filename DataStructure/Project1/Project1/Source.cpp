#include <iostream>

using namespace std;
#define Int 100000;
#define MAX 100;
int main() {
	int A[5] = { 3,7,1,9,5 };
	int Y[100][100];
	cout<<convertToYoung(A, 2, Y, 1, 2);

	return 0;
}

void convertToYoung(int A[], int k, int Y[100][100], int m, int n) {
	sort(A,k); // Sort is increase elements
	for (int i = 0; i < k; i++)
		Y[i / n][i % n] = A[i];
	for (int i = k; i < m * n; i++)
		Y[i / n][i % n] = Int;
}


void  sort(int arr[],int k) {

}

