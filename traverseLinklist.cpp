#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};
//Print LL
void printList(Node *head){ 
   Node *curr = head;
   while(curr!= NULL)
   {
       cout<<(curr->data)<<" ";
       curr=curr->next;
   }
}
//Search by key in LL
int searchLL(Node *head, int x){
     Node *curr = head;
     int pos=1;
     while(curr!= NULL)
     {
         if(curr->data==x)
         {return pos;}
         else
         {
             pos++;
             curr=curr->next;
         }
     }
     return -1;
     }


int main(){
    int n, n1,n2,n3,x;
    cout<<"Enter Elements"<<endl;
    cin>>n>>n1>>n2>>n3;
   
    Node *head= new Node(n);
    head->next= new Node(n1);
    head->next->next = new Node(n2);
    head->next->next->next= new Node(n3);
    printList(head);
     cout<<"Enter Key";
    cin>>x;
    cout<<searchLL(head,x);
    return 0;
}
