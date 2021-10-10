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
void insertAtEnd(struct node **head, int val)
{
    struct node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;
    if(*head == NULL)
         *head = newNode;
    else
    {
        struct node *lastNode = *head;
        while(lastNode->next != NULL)
            lastNode = lastNode->next;
        lastNode->next = newNode;
    }

}
int main() {
    int n,k,temp;
    cin>>n>>k;
    node *head=NULL,*prev=head;
    for(int i=0;i<n;i++){
        cin>>temp;
        insertAtEnd(&head,temp);
    }
    node* curr=head;
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

//input 1 2 3 4 5 k=2
//output  1 2 3 5