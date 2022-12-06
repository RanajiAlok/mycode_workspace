#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int value;
    ListNode *next;
    ListNode(){
        value=0;
        next=NULL;
    }

    ListNode(int value){
        this->value = value;
        this->next = NULL;
    }

};
class Linkedlist{
    ListNode *head;
    public:
    Linkedlist(){
        head=NULL;
    }
    void insertNode(int);
    void print();
    void oddEvenList();
};

    void Linkedlist::oddEvenList() {
        ListNode *odd=NULL, *even=NULL,*oddhead=NULL, *evenhead=NULL;
        if(!head || !head->next || !head->next->next)return;

        odd=head; even=head->next;; oddhead=odd; evenhead=even;
        while(even && even->next){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
    }

void Linkedlist::insertNode(int value){
    ListNode *newNode= new ListNode(value);
    if(head==NULL){
        head = newNode;
        return;
    }
    ListNode *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void Linkedlist::print(){
    ListNode *temp=head;
    if(head==NULL){
        cout<<"list empty"<<endl;
    }
    while(temp!=NULL){
        cout<<temp->value<< " "<<endl;
        temp=temp->next;
    }
}

int main(){
    Linkedlist list;
    list.insertNode(1);
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.insertNode(3);
    list.print();
    list.oddEvenList();
    cout<<" "<<endl;
    list.print();
    

    return 0;
}
