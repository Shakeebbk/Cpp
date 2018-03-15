#include <iostream>

using namespace std;

void swap_char_func(char *string_p, char *string_end_p) {
	char temp;

	//cout << "swap funcn : "<< *(string_p)<<" : " <<*(string_end_p) <<endl;

	temp =  (*string_p);
	*string_p = *string_end_p;
	*string_end_p = temp;
}

void reverse_string (char *string_p, char *string_end_p) {
	while(string_p != string_end_p) {
		swap_char_func(string_p, string_end_p);
		string_p++;
		string_end_p--;
		//cout << "swap 2 : "<< *string_p<<" : " <<*string_end_p <<endl;
	}
}


int main() {
	char my_string[] = "Shakeeb Pasha";
	char *string_end_p, *string_p;
	cout << my_string <<endl;

	string_p = my_string;
	string_end_p = string_p;
	while((*(string_end_p)) != '\0') {
		string_end_p++;
		//cout << *string_end_p << endl;
	}
	
	string_end_p--;
	reverse_string(string_p, string_end_p);

	//reverse by spaces
	string_end_p = string_p;
	while(*string_end_p !='\0') {
		//cout << "here 1 :" << *string_end_p << " "<< *string_p;
		while((*string_end_p != ' ') && (*string_end_p != '\0')) {
			string_end_p++;
			//cout << "here2 :" << *string_end_p << " "<< *string_p;
		}
		reverse_string(string_p, (string_end_p-1));
		//cout << "here3 :" << *string_end_p << " "<< *string_p;
		if(*string_end_p != '\0') {
			string_end_p++;
			string_p = string_end_p;
		}
	}
	cout << my_string <<endl;



}