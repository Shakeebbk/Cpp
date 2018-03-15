#include <iostream>

using namespace std;

void print_array(int *array, int size) {

	cout << "array : ";
	for(int i=0; i< size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void merge(int *in_array, int *out_array, int begin, int mid, int end) {
	int temp = 0;
	int a, b, k;

	a = begin;
	b = mid+1;
	k = begin;

	while((a<=mid) && (b<=end)) {
		if(in_array[a] < in_array[b]) {
			out_array[k] = in_array[a];
			a++;
		} else {
			out_array[k] = in_array[b];
			b++;
		}
		k++;
	}

	while(k<=end) {
		if(a>mid) {
			out_array[k] = in_array[b];
			b++;			
		} else {
			out_array[k] = in_array[a];
			a++;
		}
		k++;
	}
/*
	if(in_array[a] > in_array[b]) {
			out_array[i] = in_array[b];
		} else {
			out_array[i] = in_array[a];
		}
*/	//print_array(out_array, 10);
	for(int j=begin ; j<=end; j++)
		in_array[j] = out_array[j];
}

void mergesort(int *in_array, int *out_array, int begin, int end) {

	int mid = (end + begin) / 2;

	//cout << "merge_sort begin :" <<begin << "merge_sort end : "<< end <<endl; 

	if(begin<end) {
		mergesort(in_array, out_array, begin, mid);
		mergesort(in_array, out_array, mid+1, end);
	
		merge(in_array, out_array, begin, mid, end);
	} else {
		return;
	}
}

int main() {
	int a[] = {5, 12, 3, 21, 32, 23, 43, 23, 4, 5};
	int num = sizeof(a)/sizeof(a[0]);

	int b[num];

	print_array(a, num);
	mergesort(a, b, 0, num-1);

	print_array(b, num);
}