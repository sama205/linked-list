#include <iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head;
void insert(int x)
{
     node* temp = new node;
     if(head == NULL)
     {
        head = temp;
        temp->data = x;
        temp->link = NULL;
        return;
    }
    temp->data = x;
    temp->link = NULL;
    node* temp2;
    temp2 = head;
    while(temp2->link != NULL)
   {
        temp2 = temp2->link;
    }
    temp2->link = temp;
}
void revers()
{
    node*current=head;
    node*pre=NULL;
    while(current!=NULL)
    {
        link =current->link ;
        if(link==NULL)
        {
            head=current;
        }
        current->link=pre;
        pre=current;
        current=link;
    }
}
void print()
{
    node* temp2 = head;
    while(temp2 != NULL)
    {
        cout<<temp2->data<<endl;
        temp2 = temp2->link;
    }
}
int main()
{
    head = NULL;
    int n,x;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for( int i = 0; i<n ; i++)
    {
        cin>>x;
        insert(x);
    }
    print();
    revers();
    print();
}
