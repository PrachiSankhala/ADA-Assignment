/*[29] You are given a linked list, write a program to remove 
the n-th node from the end of the list and return the head of 
the linked list.*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
int main() {
    int n,k;
    cin>>n;
    node *head=NULL,*prev=head;
	//enter in reverse order. Since insert at end function is used.
    for(int i=0;i<n;i++){
        node* temp=new node();
        cin>>temp->data;
        temp->next=head;
        head=temp;
    }
    node* curr=head;
    cin>>k;
    int c=n-k;
    if(c==0){
        head=head->next;
        curr=head;
    }
    else{
    while(c--){
        prev=head;
        head=head->next;
    }
    prev->next=head->next;
    head->next=NULL;
    head=prev;
    }
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
	return 0;
}