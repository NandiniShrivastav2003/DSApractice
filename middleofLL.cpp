#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}
int lengthLL(Node *head)
{
    int l = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        curr = curr->next;
        l++;
    }
    return l;
}
Node *middleOfLL(Node *head)
{
    int mid;
    Node *curr = head;
    int len = lengthLL(curr);
    if (len % 2 != 0)
    {
mid=len/2;
    }
    else{
        mid=len/2;
    }
    for(int i=0;i<mid;i++){
        curr=curr->next;
    }
    return curr;
}
Node *removeNthNode(Node *head,int n){
    int len=lengthLL(head);
    int pos=len-n;
    int i=0;
    Node *curr=head;
    if(i == pos){ return head->next; }
    while(i<pos-1){
curr=curr->next;
i++;
    }
    curr->next=curr->next->next;
    return head;
}
Node *reverseLL(Node *head){
   Node *prev=NULL;
Node *curr=head;
while(curr!=NULL){
Node *next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
return prev;
}
int main()
{
    Node *head = new Node(10);
     Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    Node *temp4 = new Node(50);
     Node *temp5 = new Node(60);
    head->next = temp1;
     temp1->next = NULL;
    temp2->next = temp3;
    temp3->next = temp4;
    temp4->next = temp5;
    temp5->next=NULL;
    printList(head);
 cout<<"\n";
head=removeNthNode(head,1);
printList(head);
head=reverseLL(head);
printList(head);
    return 0;
}