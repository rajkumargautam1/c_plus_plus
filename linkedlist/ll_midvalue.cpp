#include<iostream>

using namespace std;

class ListNode {
public:

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertAtHead(ListNode*& head, int val) {

	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}

void printLinkedList(ListNode* head) {

	while (head) { // head != NULL
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;

}


ListNode* getmidpoint(ListNode* head){

    if(head ==NULL){
        return head;
    }

   ListNode* slow = head;
   ListNode* fast = head->next;    

	while (fast != NULL and fast->next!=NULL ) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}





int main() {

	ListNode* head = NULL; // initially, linkedList is empty
    insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    ListNode* midpoint=getmidpoint(head);

    midpoint == NULL ? cout << "LL is empty" << endl :
	                   cout << midpoint->val << endl ;



	return 0;
}