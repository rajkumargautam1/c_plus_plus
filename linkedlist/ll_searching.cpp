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

// time : O(n)

bool searchiterative(ListNode* head, int target){
    while(head != NULL){
        if(head ->val == target){
            return true;
        }
        head= head->next;

    }
    return false;
}
bool searchrecursive(ListNode* head, int target ){
     // base case 
    if(head == NULL){
        return false; 
    }

     //recursive case

     if(head->val == target){
        return true;
     }
     //search search for the target in the sublistthat starts from the node which comes 

     return searchrecursive(head->next, target);
}

int main() {

	ListNode* head = NULL; // initially, linkedList empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);
    int target =30;

    searchiterative(head, target) ? cout<<target<<" found!"<<endl:
                                    cout<<target<<" not found!"<<endl;
                                
    searchrecursive(head, target) ? cout<<target<<" found!"<<endl:
                                    cout<<target<<" not found!"<<endl;

	

}