#include <iostream>

using namespace std;

class node {
public:
	char data;
	node *next;
};


node* insert(node *head, char val) {

	node *temp = head;
	if(head == NULL) {
		head = (node*) new node;
		head->data = val;
		cout << "new head added : "<<head->data<<endl;
		return head;
	}
	while(temp->next != NULL) {
		cout <<"in while" << endl;
		temp = temp->next;
	}

	temp->next = (node*) new node;
	temp = temp->next;
	temp->data = val;
	cout<< "added val"<<endl;
	temp->next = NULL;
	return head;
}

void print_list(node *head) {

	if(head == NULL) {
		cout << "Empty list!" <<endl;
		return;
	}

	cout << "list : "<< head->data;
	
	while(head->next != NULL) {
		head = head->next;
		cout << "-->"<< head->data ;
	}
	cout <<endl;
}

node * reverse_list(node *head) {
	if((head == NULL) || (head->next == NULL)) {
		return head;
	}

	node *temp = head->next;
	head->next = NULL;
	node *temp_end = temp->next;
	while(temp_end != NULL) {
		temp->next = head;
		head = temp;
		temp = temp_end;
		temp_end = temp->next;
	}
	temp->next = head;
	return temp;
}

node* remove(node* head, char val) {
	node* temp_head = head;

	if(head == NULL) {
		return head;
	}
	if(head->data == val) {
		node *temp = head;
		head =head->next;
		cout <<"Removed : "<<val<<endl;
			
		delete temp;
		return head;
	}

	while(head->next != NULL) {
		if(head->next->data == val) {
			cout <<"Removed : "<<val<<endl;
			node *temp = head->next;
			head->next = head->next->next;

			delete temp; 
			return temp_head;
		}
		head = head->next;
	}
	cout<<"Node not FOUND!!"<<endl;
}

int main(int argc, char const *argv[])
{
	/* code */
	node *head = NULL;

	head = insert(head, 's');
	head = insert(head, 'h');
	head = insert(head, 'a');
	head = insert(head, 'k');
	head = insert(head, 'e');
	head = insert(head, 'e');
	head = insert(head, 'b');

	print_list(head);

	head = reverse_list(head);
	
	print_list(head);

	head = remove(head, 's');
	print_list(head);

	head = remove(head, 'b');
	print_list(head);

	return 0;
}