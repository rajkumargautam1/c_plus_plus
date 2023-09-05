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
ListNode* kthnodefromend(ListNode*head, int k){
    //1. move the fats pointer k-step forward

    ListNode* fast= head;
    while(k--){
        fast =fast->next;
    }
    ListNode* slow =head;


    //2.iterate over the ll using slow and fast appproach

    while(fast !=NULL){
        slow= slow->next;
        fast= fast->next;

    }
    return slow;
}







int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    int k=5;
    ListNode* kthnode=kthnodefromend(head,k);



    cout<<kthnode->val<<endl;


	printLinkedList(head);

	return 0;
}