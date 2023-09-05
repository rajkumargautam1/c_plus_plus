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
ListNode* reverseiterative(ListNode *head){
    ListNode*prev =NULL;
    ListNode* curr= head;

    while(curr !=NULL){
        ListNode* temp= curr->next;
        curr->next= prev;
        prev=curr;
        curr=temp;
    }

     return prev;

}

ListNode* reverserecursively(ListNode *head){
// base case

// if(head== NULL){
//     //ll us empty 
//     return head;
// }

if(head == NULL || head->next == NULL){
    return head;
    
}

//re cursive case

//1. ask your friend to reverse the sublist that start from the node which comes after the head nodes

    ListNode*  revhead = 	reverserecursively(head->next);
    ListNode* revtail= head->next;
    revtail->next = head;
    head->next=NULL;
    return revhead;

}

 


int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    head=reverseiterative(head);

    printLinkedList(head);



    head=reverserecursively(head);
	
	printLinkedList(head);

	return 0;
}