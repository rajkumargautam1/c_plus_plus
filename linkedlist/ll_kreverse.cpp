#include<iostream>

using namespace std;

class ListNode {

public :

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
ListNode* kreverse(ListNode* head, int k){
    //base case 

    if(head==NULL ){
        return head;
    }


    //recursive case

    ListNode* prev=NULL;
    ListNode* curr= head;

    int j=0;
    while(curr!= NULL and j<k){
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr =temp; 
        j++;

    }
    ListNode* headfrommyfriend =kreverse(curr, k);
    head->next=headfrommyfriend;
    return prev;



}





int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    int k=2;

    head= kreverse(head,k);

	printLinkedList(head);

	return 0;
}