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
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;
}
ListNode* removeduplicate(ListNode* head){
    ListNode* prev= head;
    ListNode* curr =head->next;
    while(curr !=NULL){
        //track the curr node
        if(curr->val != prev->val){

        prev->next= curr;
        prev=curr;

    }
    curr= curr->next;
    }
    prev->next=NULL;
    return head;


}
// time O(n) space 0(1) 

int main() {

	ListNode* head = NULL;
    

    insertAtHead(head, 40);
    insertAtHead(head, 30);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    head= removeduplicate(head);


	printLinkedList(head);



	return 0;
}