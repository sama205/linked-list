//insert node at the beginning 
#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head;
void insert (int x)
{
    node* temp= new node();
    temp->data=x;
    temp->next= NULL;
    if (head != NULL)
    {
        temp->next = head;
        head=temp;
    }
return;
}
void print()
{
    node* temp = head;
    cout <<"list is :"<< endl;
    while (temp != NULL)
    {
        cout <<temp-> data<<endl;
        temp = temp-> next;
    }
    cout <<"end of the list"<<endl;
    return;
}
int main ()
{
    head=NULL;
    cout<<" how many numbers?"<< endl;
    int n,x;
    cin>>n;
    for( int i=0;i<=n-1;i++)
    {
        cout<<"enter the number"<<endl;
        cin>>x;
        insert(x);
        print();
    }
}
