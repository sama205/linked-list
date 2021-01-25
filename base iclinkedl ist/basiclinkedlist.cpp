//basic linked list
#include <iostream>
using namespace std ;
struct node
{
    int data ;
    node* next;
}
int main ():
{
   
    node first;
    first.data= 10;
    node second;
    second.data=20;
    node third;
    third.data=45;
    node*head=&first;
    first.next=&second;
    second.next=&third;
    third.next=null;
    node*tmp=head;
    while((*tmp).next== null)
    {
        cout <<(*tmp).data;
        tmp=(*tmp).next
    }
}
