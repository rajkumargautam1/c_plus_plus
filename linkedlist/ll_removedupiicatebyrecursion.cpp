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
    //base case

    if(head == NULL || head->next == NULL){
        return head;
    }


    // recursive case 

    if(head->val != head->next->val){
        //head of the original ll will be the head of the first ll

        ListNode* headfrommyfriend= removeduplicate(head->next);
        head->next= headfrommyfriend;
        return head;

    }else{
        //head of the original ll is duplicate therefore it will not be the head of the final ll
         while(head->next != NULL and  head->val  == head->next->val ){
            head= head->next;

         }
         ListNode* headfrommyfriend = removeduplicate(head->next);
         return headfrommyfriend;

    }





}

//time: o(n)
//space o(ndue to funcion call stack


int main() {

	ListNode* head = NULL;
    

    insertAtHead(head, 40);
    insertAtHead(head, 30);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

    head=removeduplicate(head);

    

	printLinkedList(head);



	return 0;
}