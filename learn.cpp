#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
using namespace std;

bool compare (int a, int b) {
	return a > b;
}

void bubble_sort(vector<int> &a, int n) {
	for(int times=1;times<=n-1;times++) {
		for(int j=0; j<= n - times - 1; j++) {
			if (compare(a[j], a[j+1])) {
				swap(a[j], a[j+1]);	
			}
		}
	}
}

void testcomplexity1() {
	int n;
	cin >> n;
	vector<int> arr(n,0);

	for(int i=0;i<n;i++) {
		arr[i] = n-1;
	}

	auto start_time = clock();
	sort(arr.begin(), arr.end());
	auto end_time = clock();

	auto start_time_bubble = clock();
	bubble_sort(arr, n);
	auto end_time_bubble = clock();

	cout << "complexity merge sort : ";
	cout << end_time - start_time << endl;

	cout << "complexity bubble sort : ";
	cout << end_time_bubble - start_time_bubble << endl;
}

int arraysize(int arr[]) {
	int array[] = arr;
	int length = sizeof(array)/sizeof(array[0]);
	return length;
}

void testarray() {
	int arr[] = {1,2,3};
	cout << arraysize(arr);
}

int main() {
	// testcomplexity1();
	testarray();

	return 0;
}