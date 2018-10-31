/*
Author: Divya Gupta
C++ implementation to find intersection of 2 linked list
*/
#include<iostream>
using namespace std;
/* Link list node */
struct Node 
{ 
    int value; 
    struct Node* next; 
}; 
  
/* function to insert a node at the beginning of a linked list*/
void insert(struct Node** head, int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->value=data;
    node->next=*head;
    *head=node; 
} 
/*function to check if given data is present in a list */
bool check(struct Node *head, int data)
{
    struct Node* node=head;
    while (node!= NULL) 
    { 
        if (node->value == data) 
            return 1; 
        node= node->next; 
    } 
    return 0;
} 
/* Function to get intersection of two linked lists 
  head1 and head2 */
struct Node *getIntersection(struct Node *head1,struct Node *head2) 
{ 
    struct Node *intersection = NULL; 
    struct Node *t1 = head1; 
    while (t1 != NULL) 
    { 
        if (check(head2, t1->value)) 
            insert(&intersection, t1->value); 
        t1 = t1->next; 
    } 
  
    return intersection; 
} 
/* A function to print a linked list*/
void printList (struct Node *node) 
{ 
    while (node != NULL) 
    { 
       cout<<node->value<<" "; 
        node = node->next; 
    } 
} 
int main() 
{ 
    /* Start with the empty list */
    struct Node* head1 = NULL; 
    struct Node* head2 = NULL; 
    struct Node* intersect= NULL; 
    int l1,l2,a;
    cout<<"Enter size of first linked list ="<<endl;
    cin>>l1;
    cout<<"Enter size of second linked list = "<<endl;
    cin>>l2;
    cout<<"Enter elements of 1st linked list "<<endl;
    for(int i=0;i<l1;i++)
    {
        cin>>a;
        insert(&head1,a);
    }
     cout<<"Enter elements of 2nd linked list "<<endl;
    for(int i=0;i<l2;i++)
    {
        cin>>a;
        insert(&head2,a);
    }
    intersect = getIntersection (head1, head2); 
    cout<<"intersection of 2 linked list"<<endl;
    printList (intersect); 
    cout<<endl;
    return 0; 
}