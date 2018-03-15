#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::vector<char> char_vec;

	char_vec.push_back('s');
	char_vec.push_back('h');
	char_vec.push_back('a');
	char_vec.push_back('k');
	char_vec.push_back('e');
	char_vec.push_back('e');
	char_vec.push_back('b');

	std::vector<char>::iterator i;

	std::cout << "char_vec.size()"<<char_vec.size() << endl;
	for(i=char_vec.begin(); i!=char_vec.end();i++)
		std::cout << *i;
	std::cout<<endl;
		
	char_vec.pop_back();
	
	std::cout << "char_vec.size()"<<char_vec.size() << endl;
	for(i=char_vec.begin(); i!=char_vec.end();i++)
		std::cout << *i;
	std::cout<<endl;

	char_vec.pop_back();
	
	std::cout << "char_vec.size()"<<char_vec.size() << endl;
	for(i=char_vec.begin(); i!=char_vec.end();i++)
		std::cout << *i;
	std::cout<<endl;
	
	return 0;
}