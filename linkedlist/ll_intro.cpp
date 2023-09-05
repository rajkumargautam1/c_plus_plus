#include<bits/stdc++.h>
using namespace std;
class listnode{
    public:
    int val;
    listnode* next;
    listnode(int val){
        this->val =val;
        this->next =NULL;
    }
};
    
    void insertathead(listnode*& head, int val){
        //1.create a new node on the heap with the given "val";

        listnode* n=new listnode(val);


        //2.update the next field of the newly created  to point to the current head of the ll
        n-> next =head;


        //3.make the newly created node as the new head of the ll 
        head=n;
    }
    void printlinkedlist(listnode* head){
        while(head !=NULL){
            cout<<head->val <<" ";
            head= head->next;
        }
        cout<<endl;
    
}
int main(){
    // listnode * node =new listnode(10);
    // cout<<node->val <<endl;
    listnode* head =NULL;                       //ll is empty
    insertathead(head, 50);
    insertathead(head, 40);
    insertathead(head, 30);
    insertathead(head, 20);
    insertathead(head, 10);
    insertathead(head, 0);

    printlinkedlist(head);
    printlinkedlist(head);
    
    if(head == NULL) cout<<"ll is empty"<<endl;

    return 0;
}