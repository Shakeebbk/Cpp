#include <iostream>

using namespace std;

void print_array(int *array, int size) {

	cout << "array : ";
	for(int i=0; i< size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void bubble_sort(int *array, int size) {
	for(int i=0; i<(size-1);i++) {
		for(int j=0; j< size; j++) {
			if(array[j+1] < array[j]) {
				//swap
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
		print_array(array, 10);
	}
}

int main() {
	int array[] = {12, 123, 221, 2, 123, 23, 25, 213, 54, 12};

	print_array(array, 10);
	bubble_sort(array, 10);
	print_array(array, 10);
}