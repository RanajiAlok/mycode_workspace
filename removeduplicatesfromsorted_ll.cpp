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
    void deleteDuplicates();
};

void Linkedlist::deleteDuplicates() {
        if(head==NULL)
            return;
        
        ListNode *temp=head;
        while(temp && temp->next){
            if(temp->value==temp->next->value)
            temp->next=temp->next->next;
            //free(temp->next);
            else
            temp=temp->next;
        }
        
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
        cout<<temp->value<< " ";
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
    list.deleteDuplicates();
    cout<<endl;
    list.print();

    return 0;
}
