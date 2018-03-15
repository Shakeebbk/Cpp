#include <iostream>

using namespace std;

void print_array(int *array, int size) {

	cout << "array : ";
	for(int i=0; i< size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void selection_sort(int *array, int size) {
	int smallest_index = 0;
	for(int i=0; i<size-1 ; i++) {
		smallest_index = i;

		for(int j=i; j<size; j++) {
			if(array[j] < array[smallest_index]) {
				smallest_index = j;
			}
		}
		//swap
		int temp = array[smallest_index];
		array[smallest_index] = array[i];
		array[i] = temp;
	}
}

int main() {
	int array[] = {12, 532, 21, 54, 1265, 343, 213, 65, 125, 2, 4};

	print_array(array, 11);

	selection_sort(array, 11);

	print_array(array, 11);
}